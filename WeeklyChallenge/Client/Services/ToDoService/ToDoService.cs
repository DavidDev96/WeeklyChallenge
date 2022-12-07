using Microsoft.AspNetCore.Components;
using System.Net.Http.Json;

namespace WeeklyChallenge.Client.Services.ToDoService
{
    public class ToDoService : IToDoService
    {
        private readonly HttpClient _http;
        private readonly NavigationManager _navigationManager;

        public ToDoService(HttpClient http, NavigationManager navigationManager)
        {
            _http = http;
            _navigationManager = navigationManager;
        }
        public List<ToDo> ToDos { get; set; } = new List<ToDo>();

        private async Task SetToDos(HttpResponseMessage result)
        {
            var response = await result.Content.ReadFromJsonAsync<List<ToDo>>();
            ToDos = response;
            _navigationManager.NavigateTo("tasks");
        }

        public async Task GetToDos()
        {
            var result = await _http.GetFromJsonAsync<List<ToDo>>("api/todo");
            if (result != null)
            {
                ToDos = result;
            }
        }

        public async Task<List<ToDo>> GetToDosOfUserByWeekNumber(string personId, int weekNumber)
        {
            var result = await _http.GetFromJsonAsync<List<ToDo>>($"api/todo/{personId}{weekNumber}");
            if (result != null)
            {
                return result;
            }
            throw new Exception("Todo not found!");
        }

        public async Task<List<ToDo>> GetActiveToDosOfWeek(int weekNumber)
        {
            var result = await _http.GetFromJsonAsync<List<ToDo>>($"api/todo/{weekNumber}");
            if (result != null)
            {
                return result.Where(x => !x.Finished).ToList();
            }
            throw new Exception("Todo not found!");
        }

        public async Task CreateToDo(ToDo toDo)
        {
            var result = await _http.PostAsJsonAsync("api/todo", toDo);
            var response = await result.Content.ReadFromJsonAsync<List<ToDo>>();
            ToDos = response;
        }

        public async Task FinishToDo(string id)
        {
            var result = await _http.GetFromJsonAsync<List<ToDo>>($"api/todo/finish/{id}");
            ToDos = result;
        }
    }
}

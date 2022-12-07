using WeeklyChallenge.Shared;

namespace WeeklyChallenge.Client.Services.ToDoService
{
    public interface IToDoService
    {
        List<ToDo> ToDos { get; set; }
        Task GetToDos();
        Task <List<ToDo>> GetActiveToDosOfWeek(int weekNumber);
        Task<List<ToDo>> GetToDosOfUserByWeekNumber(string personId, int weekNumber);
        Task FinishToDo(string id);
        Task CreateToDo(ToDo toDo);

    }
}

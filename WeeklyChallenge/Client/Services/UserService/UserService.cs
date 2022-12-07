using System.Net.Http.Json;

namespace WeeklyChallenge.Client.Services.UserService
{
    public class UserService : IUserService
    {
        private readonly HttpClient _http;

        public UserService(HttpClient http)
        {
            _http = http;
        }
        public List<User> Users { get; set; } = new List<User>();

        public async Task GetUsers()
        {
            var result = await _http.GetFromJsonAsync<List<User>>("api/user");
            if (result != null)
            {
                Users = result;
            }
        }
    }
}

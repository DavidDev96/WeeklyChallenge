global using WeeklyChallenge.Client.Services.ToDoService;
global using WeeklyChallenge.Shared;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using WeeklyChallenge.Client;
using WeeklyChallenge.Client.Services.UserService;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });
builder.Services.AddScoped<IToDoService, ToDoService>();
builder.Services.AddScoped<IUserService, UserService>();

await builder.Build().RunAsync();

global using WeeklyChallenge.Client.Services.ToDoService;
global using WeeklyChallenge.Shared;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Authentication;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using WeeklyChallenge.Client;
using WeeklyChallenge.Client.Services.UserService;
using Syncfusion.Blazor;
using Microsoft.AspNetCore.Components.Authorization;

var builder = WebAssemblyHostBuilder.CreateDefault(args);


builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

/*
** Add a HttpClient for REST APIs to the app.
*/
var name = "WeeklyChallenge.Client.ServerAPI";
var aadScope = builder.Configuration["AzureAd:Scope"];
builder.Services
    .AddHttpClient(name, client => client.BaseAddress = new Uri(builder.HostEnvironment.BaseAddress))
    .AddHttpMessageHandler<BaseAddressAuthorizationMessageHandler>();
builder.Services
    .AddScoped(sp => sp.GetRequiredService<IHttpClientFactory>().CreateClient(name));

/*
** Add support for Azure Active Directory
*/
builder.Services
    .AddMsalAuthentication(options =>
    {
        builder.Configuration.Bind("AzureAd", options.ProviderOptions.Authentication);
        options.ProviderOptions.DefaultAccessTokenScopes.Add(aadScope);
    });



builder.Services.AddScoped<IToDoService, ToDoService>();
builder.Services.AddScoped<IUserService, UserService>();
builder.Services.AddSyncfusionBlazor();
await builder.Build().RunAsync();

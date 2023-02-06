using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

#pragma warning disable CA1814 // Prefer jagged arrays over multidimensional

namespace WeeklyChallenge.Server.Migrations
{
    /// <inheritdoc />
    public partial class AddedFullNameAndEmailToUsers : Migration
    {
        /// <inheritdoc />
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DeleteData(
                table: "ToDos",
                keyColumn: "Id",
                keyValue: "be75c81c-0f19-4092-92a9-1f3ac8ea53b0");

            migrationBuilder.DeleteData(
                table: "Users",
                keyColumn: "Id",
                keyValue: "12899f59-22e6-4e35-98a0-4042810d8e83");

            migrationBuilder.DeleteData(
                table: "Users",
                keyColumn: "Id",
                keyValue: "99effcba-f07c-43a5-a8d2-dd0ad7af439d");

            migrationBuilder.DeleteData(
                table: "Users",
                keyColumn: "Id",
                keyValue: "9d8f4755-5a70-4b3f-bd30-dc241b343d82");

            migrationBuilder.DeleteData(
                table: "Users",
                keyColumn: "Id",
                keyValue: "aac658ce-7997-4207-8fba-e667415c4e3d");

            migrationBuilder.DeleteData(
                table: "Users",
                keyColumn: "Id",
                keyValue: "d6c8a836-b512-4f3f-9b59-9ebd358a0dbd");

            migrationBuilder.RenameColumn(
                name: "Name",
                table: "Users",
                newName: "FullName");

            migrationBuilder.AddColumn<string>(
                name: "Email",
                table: "Users",
                type: "nvarchar(200)",
                maxLength: 200,
                nullable: false,
                defaultValue: "");

            migrationBuilder.AddColumn<string>(
                name: "FirstName",
                table: "Users",
                type: "nvarchar(50)",
                maxLength: 50,
                nullable: false,
                defaultValue: "");
        }

        /// <inheritdoc />
        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropColumn(
                name: "Email",
                table: "Users");

            migrationBuilder.DropColumn(
                name: "FirstName",
                table: "Users");

            migrationBuilder.RenameColumn(
                name: "FullName",
                table: "Users",
                newName: "Name");

            migrationBuilder.InsertData(
                table: "ToDos",
                columns: new[] { "Id", "Finished", "FinishedAt", "Name", "PersonId", "WeekNumber", "Year" },
                values: new object[] { "be75c81c-0f19-4092-92a9-1f3ac8ea53b0", false, null, "Pumpen", "9d8f4755-5a70-4b3f-bd30-dc241b343d82", 50, 2022 });

            migrationBuilder.InsertData(
                table: "Users",
                columns: new[] { "Id", "Deleted", "Name" },
                values: new object[,]
                {
                    { "12899f59-22e6-4e35-98a0-4042810d8e83", false, "Andreas" },
                    { "99effcba-f07c-43a5-a8d2-dd0ad7af439d", false, "Gabriel" },
                    { "9d8f4755-5a70-4b3f-bd30-dc241b343d82", false, "Raphael" },
                    { "aac658ce-7997-4207-8fba-e667415c4e3d", false, "Simon" },
                    { "d6c8a836-b512-4f3f-9b59-9ebd358a0dbd", false, "David" }
                });
        }
    }
}

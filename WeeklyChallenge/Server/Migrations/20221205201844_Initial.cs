using System;
using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

#pragma warning disable CA1814 // Prefer jagged arrays over multidimensional

namespace WeeklyChallenge.Server.Migrations
{
    /// <inheritdoc />
    public partial class Initial : Migration
    {
        /// <inheritdoc />
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.CreateTable(
                name: "ToDos",
                columns: table => new
                {
                    Id = table.Column<string>(type: "nvarchar(200)", maxLength: 200, nullable: false),
                    Name = table.Column<string>(type: "nvarchar(200)", maxLength: 200, nullable: false),
                    WeekNumber = table.Column<int>(type: "int", nullable: false),
                    PersonId = table.Column<string>(type: "nvarchar(200)", maxLength: 200, nullable: false),
                    Finished = table.Column<bool>(type: "bit", nullable: false),
                    FinishedAt = table.Column<DateTime>(type: "datetime2", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_ToDos", x => x.Id);
                });

            migrationBuilder.CreateTable(
                name: "Users",
                columns: table => new
                {
                    Id = table.Column<string>(type: "nvarchar(200)", maxLength: 200, nullable: false),
                    Name = table.Column<string>(type: "nvarchar(200)", maxLength: 200, nullable: false),
                    Deleted = table.Column<bool>(type: "bit", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Users", x => x.Id);
                });

            migrationBuilder.InsertData(
                table: "ToDos",
                columns: new[] { "Id", "Finished", "FinishedAt", "Name", "PersonId", "WeekNumber" },
                values: new object[] { "be75c81c-0f19-4092-92a9-1f3ac8ea53b0", false, null, "Pumpen", "9d8f4755-5a70-4b3f-bd30-dc241b343d82", 50 });

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

        /// <inheritdoc />
        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropTable(
                name: "ToDos");

            migrationBuilder.DropTable(
                name: "Users");
        }
    }
}

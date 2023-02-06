using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

namespace WeeklyChallenge.Server.Migrations
{
    /// <inheritdoc />
    public partial class AddedYearToTask : Migration
    {
        /// <inheritdoc />
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.AddColumn<int>(
                name: "Year",
                table: "ToDos",
                type: "int",
                nullable: false,
                defaultValue: 0);

            migrationBuilder.UpdateData(
                table: "ToDos",
                keyColumn: "Id",
                keyValue: "be75c81c-0f19-4092-92a9-1f3ac8ea53b0",
                column: "Year",
                value: 2022);
        }

        /// <inheritdoc />
        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropColumn(
                name: "Year",
                table: "ToDos");
        }
    }
}

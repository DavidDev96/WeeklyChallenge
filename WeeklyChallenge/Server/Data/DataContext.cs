namespace WeeklyChallenge.Server.Data
{
    public class DataContext : DbContext
    {
        public DataContext(DbContextOptions<DataContext> options) : base(options)
        {

        }

        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {

            modelBuilder.Entity<User>().HasData(
                new User { Id = "9d8f4755-5a70-4b3f-bd30-dc241b343d82", Name = "Raphael" },
                new User { Id = "12899f59-22e6-4e35-98a0-4042810d8e83", Name = "Andreas" },
                new User { Id = "99effcba-f07c-43a5-a8d2-dd0ad7af439d", Name = "Gabriel" },
                new User { Id = "aac658ce-7997-4207-8fba-e667415c4e3d", Name = "Simon" },
                new User { Id = "d6c8a836-b512-4f3f-9b59-9ebd358a0dbd", Name = "David" }
            );

            modelBuilder.Entity<ToDo>().HasData(
                new ToDo { Id = "be75c81c-0f19-4092-92a9-1f3ac8ea53b0", Name = "Pumpen", Finished = false, FinishedAt = null, PersonId = "9d8f4755-5a70-4b3f-bd30-dc241b343d82", WeekNumber = 50 }
            );
        }

        public DbSet<ToDo> ToDos { get; set; }
        public DbSet<User> Users { get; set; }
    }
}

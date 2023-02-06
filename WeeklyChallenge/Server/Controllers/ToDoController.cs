using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using WeeklyChallenge.Server.Data;

namespace WeeklyChallenge.Server.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class ToDoController : ControllerBase
    {
        private readonly DataContext _context;

        public ToDoController(DataContext context)
        {
            _context = context;
        }

        [HttpGet]
        public async Task<ActionResult<List<ToDo>>> GetToDos()
        {
            var toDos = await _context.ToDos.ToListAsync();
            return Ok(toDos);
        }

        [HttpGet("{personId}/{weekNumber}")]
        public async Task<ActionResult<List<ToDo>>> GetToDosOfUserByWeekNumber(string personId, int weekNumber)
        {
            var toDos = await _context.ToDos.Where(x => x.PersonId.Equals(personId) && x.WeekNumber.Equals(weekNumber)).ToListAsync();
            return Ok(toDos);
        }

        [HttpGet("{weekNumber}")]
        public async Task<ActionResult<List<ToDo>>> GetActiveToDosOfWeek(int weekNumber)
        {
            if (weekNumber <= 0 || weekNumber > 56)
            {
                return ArgumentOutOfRangeException("invalid week number");
            }
            var toDos = await _context.ToDos.Where(x => x.WeekNumber.Equals(weekNumber)).ToListAsync();
            return Ok(toDos);
        }

        private ActionResult<List<ToDo>> ArgumentOutOfRangeException(string v)
        {
            throw new Exception(v);
        }

        [HttpGet("finish/{id}")]
        public async Task<ActionResult<List<ToDo>>> FinishToDo(string id)
        {
            var dbToDo = await _context.ToDos.FirstOrDefaultAsync(x => x.Id == id);
            if (dbToDo == null)
            {
                return NotFound();
            }
            dbToDo.FinishedAt = DateTime.Now;
            dbToDo.Finished = true;

            await _context.SaveChangesAsync();

            return await GetToDos();
        }

        [HttpPost]
        public async Task<ActionResult<List<ToDo>>> CreateToDo(ToDo toDo)
        {
            if (toDo.PersonId == "ALL")
            {
                foreach (var user in await _context.Users.Where(x => !x.Deleted).ToListAsync())
                {
                    ToDo newToDo = new ToDo()
                    {
                        Id = System.Guid.NewGuid().ToString(),
                        Name = toDo.Name,
                        PersonId = user.Id,
                        WeekNumber = toDo.WeekNumber,
                        Finished = false,
                        FinishedAt = null
                    };

                    _context.ToDos.Add(newToDo);
                }
            } else
            {
                _context.ToDos.Add(toDo);
            }
            await _context.SaveChangesAsync();
            return Ok(await GetToDos());
        }
    }
}

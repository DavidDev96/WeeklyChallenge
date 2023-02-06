using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WeeklyChallenge.Shared
{
    public class ToDo
    {
        [Key]
        [StringLength(200)]
        public string Id { get; set; } = string.Empty;
        [Required]
        [StringLength(200)]
        public string Name { get; set; } = string.Empty;
        [Required]
        public int WeekNumber { get; set; }
        [Required]
        public int Year { get; set; } = 2023;
        [Required]
        [StringLength(200)]
        public string PersonId { get; set; } = string.Empty;
        public bool Finished { get; set; } = false;
        public DateTime? FinishedAt { get; set; }
    }
}

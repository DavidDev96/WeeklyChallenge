using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WeeklyChallenge.Shared
{
    public class User
    {
        [Key]
        [StringLength(200)]
        public string Id { get; set; } = string.Empty;
        [Required]
        [StringLength(200)]
        public string Name { get; set; } = string.Empty;
        public bool Deleted { get; set; } = false;
    }
}

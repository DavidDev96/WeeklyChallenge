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
        [StringLength(50)]
        public string FirstName { get; set; } = string.Empty;
        [StringLength(200)]
        public string FullName { get; set; } = string.Empty;
        [StringLength(200)]
        public string Email { get; set; } = string.Empty;
        public bool Deleted { get; set; } = false;
    }
}

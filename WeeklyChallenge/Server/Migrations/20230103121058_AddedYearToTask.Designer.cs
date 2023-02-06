﻿// <auto-generated />
using System;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Infrastructure;
using Microsoft.EntityFrameworkCore.Metadata;
using Microsoft.EntityFrameworkCore.Migrations;
using Microsoft.EntityFrameworkCore.Storage.ValueConversion;
using WeeklyChallenge.Server.Data;

#nullable disable

namespace WeeklyChallenge.Server.Migrations
{
    [DbContext(typeof(DataContext))]
    [Migration("20230103121058_AddedYearToTask")]
    partial class AddedYearToTask
    {
        /// <inheritdoc />
        protected override void BuildTargetModel(ModelBuilder modelBuilder)
        {
#pragma warning disable 612, 618
            modelBuilder
                .HasAnnotation("ProductVersion", "7.0.0")
                .HasAnnotation("Relational:MaxIdentifierLength", 128);

            SqlServerModelBuilderExtensions.UseIdentityColumns(modelBuilder);

            modelBuilder.Entity("WeeklyChallenge.Shared.ToDo", b =>
                {
                    b.Property<string>("Id")
                        .HasMaxLength(200)
                        .HasColumnType("nvarchar(200)");

                    b.Property<bool>("Finished")
                        .HasColumnType("bit");

                    b.Property<DateTime?>("FinishedAt")
                        .HasColumnType("datetime2");

                    b.Property<string>("Name")
                        .IsRequired()
                        .HasMaxLength(200)
                        .HasColumnType("nvarchar(200)");

                    b.Property<string>("PersonId")
                        .IsRequired()
                        .HasMaxLength(200)
                        .HasColumnType("nvarchar(200)");

                    b.Property<int>("WeekNumber")
                        .HasColumnType("int");

                    b.Property<int>("Year")
                        .HasColumnType("int");

                    b.HasKey("Id");

                    b.ToTable("ToDos");

                    b.HasData(
                        new
                        {
                            Id = "be75c81c-0f19-4092-92a9-1f3ac8ea53b0",
                            Finished = false,
                            Name = "Pumpen",
                            PersonId = "9d8f4755-5a70-4b3f-bd30-dc241b343d82",
                            WeekNumber = 50,
                            Year = 2022
                        });
                });

            modelBuilder.Entity("WeeklyChallenge.Shared.User", b =>
                {
                    b.Property<string>("Id")
                        .HasMaxLength(200)
                        .HasColumnType("nvarchar(200)");

                    b.Property<bool>("Deleted")
                        .HasColumnType("bit");

                    b.Property<string>("Name")
                        .IsRequired()
                        .HasMaxLength(200)
                        .HasColumnType("nvarchar(200)");

                    b.HasKey("Id");

                    b.ToTable("Users");

                    b.HasData(
                        new
                        {
                            Id = "9d8f4755-5a70-4b3f-bd30-dc241b343d82",
                            Deleted = false,
                            Name = "Raphael"
                        },
                        new
                        {
                            Id = "12899f59-22e6-4e35-98a0-4042810d8e83",
                            Deleted = false,
                            Name = "Andreas"
                        },
                        new
                        {
                            Id = "99effcba-f07c-43a5-a8d2-dd0ad7af439d",
                            Deleted = false,
                            Name = "Gabriel"
                        },
                        new
                        {
                            Id = "aac658ce-7997-4207-8fba-e667415c4e3d",
                            Deleted = false,
                            Name = "Simon"
                        },
                        new
                        {
                            Id = "d6c8a836-b512-4f3f-9b59-9ebd358a0dbd",
                            Deleted = false,
                            Name = "David"
                        });
                });
#pragma warning restore 612, 618
        }
    }
}
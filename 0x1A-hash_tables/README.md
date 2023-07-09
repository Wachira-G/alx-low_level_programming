# Concept: 0x1A. C - Hash tables

## Resources

**Read or watch:**

- [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
- [Hash function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash table](https://en.wikipedia.org/wiki/Hash_table)
- [All about hash tables](https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus)
- [why hash tables and not arrays](https://stackoverflow.com/questions/31930046/what-is-a-hash-table-and-how-do-you-make-it-in-c)
- [CS50 shorts - Hash-tables](https://video.cs50.io/nvzVHwrrub0)
- [Hash dbj2 algorith source](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)
- [The Art in Code - Snippets of famous, interesting, historically relevant or thought-provoking... code: djb2 hash](https://theartincode.stanis.me/008-djb2/#:~:text=Written%20by%20Daniel%20J.,a%20number%20that%20represents%20it.)

## Learning Objectives

### General

- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

## Tasks

The files are compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`. Each task is compiled with every .c file before it (except the prior *-main.c files).
The output file for each task is '`-> <file>`'.

- **0:** A function that creates a hash table. [0-hash_table_create.c](https://github.com/Wachira-G/alx-low_level_programming/blob/main/0x1A-hash_tables/0-hash_table_create.c) -> a
- **1:** A hash function implementing the djb2 algorithm. [1-djb2.c](https://github.com/Wachira-G/alx-low_level_programming/blob/main/0x1A-hash_tables/1-djb2.c) -> b
- **2:** A function that gives you the index of a key. [2-key_index.c](https://github.com/Wachira-G/alx-low_level_programming/blob/main/0x1A-hash_tables/2-key_index.c) -> c
- **3:** A function that adds an element to the hash table. [3-hash_table_set.c](https://github.com/Wachira-G/alx-low_level_programming/blob/main/0x1A-hash_tables/3-hash_table_set.c) -> d
- **4:** A function that retrieves a value associated with a key. [4-hash_table_get.c](https://github.com/Wachira-G/alx-low_level_programming/blob/main/0x1A-hash_tables/4-hash_table.get.c) -> e
- **5:** A function that prints a hash table. [5-hash_table_print.c](https://github.com/Wachira-G/alx-low_level_programming/blob/main/0x1A-hash_tables/5-hash_table_print.c) -> f
- **6:** A function that deletes a hash table. [6-hash_table_delete.c](https://github.com/Wachira-G/alx-low_level_programming/blob/main/0x1A-hash_tables/6-hash_table_delete.c) -> g
- **7:** In PHP, hash tables are ordered - Rewrite the given functions using the given data structures.[100-sorted_hash_table.c](https://github.com/Wachira-G/alx-low_level_programming/blob/main/0x1A-hash_tables/100-sorted_hash_table.c)

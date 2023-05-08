#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_error - read error handling helper function
 * @filename: name of file we are trying to read
 */
void read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * close_error - closing file error handling
 * @fd: file descriptor
 */
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
  * write_error - write error handling helper funtion
  * @filename: our file.
  */
void write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * main - entry point to our program
 * that copies the content of a file to another file.
 * Usage - cp file_from file_to
 * @argc: number of arguments given;
 * @argv: array to the arguments as strings.
 *
 * if the number of argument is not the correct one,
 *  exit with code 97 and print Usage cp file_from file_to,
 *   followed by a new line, on the POSIX standard error.
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not read it,
 *  exit with code 98 and print Error Can't read from file NAME_OF_THE_FILE,
 *   followed by a new line, on the POSIX standard error
 *   where NAME_OF_THE_FILE is the first argument passed to your program
 * if you can not create or if write to file_to fails, exit with code 99
 *  and print Error Can't write to NAME_OF_THE_FILE,
 *   followed by a new line, on the POSIX standard error
 *   where NAME_OF_THE_FILE is the second argument passed to your program
 * if you can not close a file descriptor , exit with code 100
 *  and print Error Can't close fd FD_VALUE,
 *   followed by a new line, on the POSIX standard error
 *    where FD_VALUE is the value of the file descriptor
 * Permissions of the created file- rw-rw-r--.
 * If the file already exists, do not change the permissions
 * You must read 1,024 bytes at a time from the file_from
 * to make less system calls.
 * Use a buffer
 * You are allowed to use dprintf
 * Return: 0 always.
 */

int main(int argc, char **argv)
{
	int from_fd, to_fd, num_read, num_written;
	char buffer[1024];
	struct stat st;

	/*check for correct number of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open source file for reading */
	if (stat(argv[1], &st) == -1)
		read_error(argv[1]);
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		read_error(argv[1]);

	/* Open destination file for writing, truncate if it exists */
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (to_fd == -1)
		write_error(argv[2]);
	/* copy file contents */
	while ((num_read = read(from_fd, buffer, 1024)) > 0)
	{
		num_written = write(to_fd, buffer, num_read);
		if (num_written != num_read)
			write_error(argv[2]);
	}
	/* handle errors during copy */
	if (num_read == -1)
		read_error(argv[1]);
	/* close file descriptors */
	if (close(from_fd) == -1)
		close_error(from_fd);
	if (close(to_fd) == -1)
		close_error(to_fd);

	return (0);
}

#include "main.h"

/**
 * close_file - closes a file and handles errors on fail
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int closed = close(fd);

	if (closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * read_error - handles read errors
 * @file_from: file descriptor of the file to read from
 */
void read_error(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
 * main - entry point to our program
 * that copies the content of a file to another file.
 * Usage - cp file_from file_to
 * @ac: number of arguments given;
 * @av: array to the arguments as strings.
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
int main(int ac, char **av)
{

	int file_from_fd, file_to_fd;
	char buf[BUFFER_SIZE], *file_from, *file_to;
	ssize_t red, writ;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	if (file_from == NULL)
		read_error(file_from);
	file_from_fd = open(file_from, O_RDONLY); /* open file in read only mode*/
	if (file_from_fd == -1)
		return (0);
	file_to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to_fd == -1)
		return (0);
	/* read file contents into buffer buf - upto letters(number)*/
	while ((red = read(file_from_fd, buf, BUFFER_SIZE)) > 0)
	{
		writ = write(file_to_fd, buf, red);
		if (writ == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (red == -1)
		read_error(file_from);
	close_file(file_from_fd);
	close_file(file_to_fd);
	return (0);
}

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * instructin are that
 * Write a program that copies the content of a file to another file.
 * Usage: cp file_from file_to
 * if the number of argument is not the correct one, exit with code 97
 *  and print Usage: cp file_from file_to,
 *  followed by a new line, on the POSIX standard error.
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not read it, exit with code 98
 *  and print Error: Can't read from file NAME_OF_THE_FILE,
 *   followed by a new line, on the POSIX standard error.
 *   where NAME_OF_THE_FILE is the first argument passed to your program
 * if you can not create or if write to file_to fails,
 *  exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE,
 *   followed by a new line, on the POSIX standard error
 *   where NAME_OF_THE_FILE is the second argument passed to your program
 * if you can not close a file descriptor , exit with code 100
 *  and print Error: Can't close fd FD_VALUE, followed by a new line,
 *   on the POSIX standard error.
 *   where FD_VALUE is the value of the file descriptor
 *  Permissions of the created file: rw-rw-r--.
 *   If the file already exists, do not change the permissions.
 *
 *   You must read 1,024 bytes at a time from the file_from
 *    to make less system calls. Use a buffer
 *    You are allowed to use dprintf
 */

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to append contents.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 * Do not create file if it does not exist
 *
 * if filename is NULL return -1.
 * if text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, f_desctr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1); /*do i check write permissions here?*/
	while (text_content[len] != '\0')
		len++;

	if (access(filename, F_OK | W_OK) == 0)
		f_desctr = open(filename, O_WRONLY | O_APPEND);
	if (f_desctr == -1)
		return (-1);
	if (write(f_desctr, text_content, len) != len)
	{
		close(f_desctr);
		return (-1);
	}
	close(f_desctr);
	return (1);
}

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to a string containing the name of file we want to read
 * @letters:  number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int count = 0, write_count = 0, fptr = open(filename, O_RDONLY);
	char *buffer = NULL; /* later point to heap for enough buffer space */
	struct stat size;

	if (filename == NULL)
		return (0);
	if (fptr == -1) /* open fail */
		return (0);
	if (stat(filename, &size) == -1) /* call to stat fail */
	{
		close(fptr);
		return (0);
	}
	if (letters > (size_t)size.st_size) /*letters larger than filesize */
		letters = size.st_size;
	buffer = malloc(letters + 1);
	if (buffer == NULL) /* malloc fail */
	{
		close(fptr);
		return (0);
	}
	count = read(fptr, buffer, letters);
	if (count == -1) /* read fail */
	{
		free(buffer);
		close(fptr);
		return (0);
	}
	buffer[count] = '\0'; /* append ternimating null in array */
	write_count = write(STDOUT_FILENO, buffer, count);
	if (write_count < 0) /* write fail */
	{
		free(buffer);
		close(fptr);
		return (0);
	}
	free(buffer);
	close(fptr);
	return (count);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}

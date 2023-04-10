#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <sys/stat.h>

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

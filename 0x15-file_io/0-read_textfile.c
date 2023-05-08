#include "main.h"
/**
 * close_func - cleans up after fail
 * @buf: buffer
 * @fd: file descripter
 */
void close_func(char *buf, int fd)
{
	free(buf);
	buf = NULL;
	close(fd);
}

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the filet to read
 * @letters: no of letters to read and print
 * Return: the actual no of letters it could read and print,
 * if file cannot be opened or read, return 0,
 * if filename is NULL return 0
 * if write fails, or does not write the expected amount of bytes , return 0
 * allowed syscalls : open, read, write, closes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = NULL;
	ssize_t red, writ;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters); /* creat space to store content*/
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY); /* open file in read only mode*/
	if (fd == -1)
	{
		free(buf);
		buf = NULL;
		return (0);
	}
	/* read file contents into buffer buf - upto letters(number)*/
	red = read(fd, buf, letters);
	if (red == -1)
	{
		close_func(buf, fd);
		return (0);
	}
	/* write to stdout from buffer red(read) number of chars*/
	writ = write(STDOUT_FILENO, buf, red);
	if (writ == -1 || writ != red) /* write fail or read<write */
	{
		close_func(buf, fd);
		return (0);
	}
	/* close file and check for fail*/
	if (close(fd) == -1)
	{
		free(buf);
		buf = NULL;
		return (0);
	}
	free(buf);
	buf = NULL;
	return (writ);
}

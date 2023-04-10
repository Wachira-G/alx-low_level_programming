#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written, write “fails”,etc…)
 *
 * created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it.
 * if filename is NULL return -1.
 * if text_content is NULL create an empty file.
 *
 */
int create_file(const char *filename, char *text_content)
{
	/* ssize_t write(int fd, const void *buf, size_t count); */
	int count, len = 0, fptr;

	if (filename == NULL)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	fptr = open(filename, O_WRONLY | O_APPEND);
	if (fptr == -1)
		fptr = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fptr == -1)
		return (-1);
	count = write(fptr, text_content, len);
	if (count < 0)
		return (-1);
	close(fptr);
	return (1);
}

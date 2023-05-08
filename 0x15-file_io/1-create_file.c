#include "main.h"

/**
 * _strlen - calcutate the length of a string
 * @s: the string
 * Return: the lenght of the string
 */
size_t _strlen(const char *s)
{
	size_t len = 0;
	const char *p = s; /* use another pointer to traverse */

	if (s == NULL)
		return (0);
	while (*p != '\0')
		p++;
	len = (size_t) (p - s); /* diff of 2 prt gives ptrdiff_t hence cast */
	return (len);
}

/**
 * create_file - creates a file
 * @filename: is the name of the file to create and
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 *
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t written;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	/* open file */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (fd == -1)
		return (-1);
	/* write file */
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		written = write(fd, text_content, len);
		if (written == -1)
			return (-1);
	}
	/* close file */
	close(fd);
	/* return */
	return (1);
}

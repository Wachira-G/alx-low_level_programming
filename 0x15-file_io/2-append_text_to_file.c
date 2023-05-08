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
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file and
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 *
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t written;

	if (filename == NULL)
		return (-1);
	/* open file */
	fd = open(filename, O_WRONLY | O_APPEND);
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

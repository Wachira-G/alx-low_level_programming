#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"

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

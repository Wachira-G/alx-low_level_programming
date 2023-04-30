#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
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
	int len = 0, f_desctr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	while (text_content[len] != '\0')
		len++;

	f_desctr = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR);
	if (f_desctr == -1)
		return (-1);
	if (write(f_desctr, text_content, len) != len)
	{
		close(f_desctr);
		return (-1);
	}
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		close(f_desctr);
		return (-1);
	}
	close(f_desctr);
	return (1);
}

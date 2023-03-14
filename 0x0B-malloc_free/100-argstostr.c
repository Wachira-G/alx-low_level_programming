#include <stdlib.h>
#include "main.h"

/**
 * argstostr - definition
 * Description: concatenates all the arguments of your program.
 * @ac : this is main's 'argc' i.e number of arguments
 * @av: this is main's 'argv[]' i.e list of string arguments
 * Return: NULL if ac == 0 or av == NULL,
 *   pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new stringi
 * NOTES: In an argv argument list, each string argument
 *  is separated by whitespace (such as spaces, tabs, or newlines)
 *   and stored as a separate element in the argv array
 *    The last element in the argv array is always a NULL pointer,
 *   which serves as a sentinel value to indicate the end of the argument list.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, m, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = ac; /* for all the \n */
	i = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}

	str = (char *) malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	m = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[m] = av[i][j];
			m++;
		}
		str[m] = '\n';
		m++;
	}
	str[m] = '\0';
	return (str);
}

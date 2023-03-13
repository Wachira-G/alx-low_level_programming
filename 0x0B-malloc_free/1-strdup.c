#include <stdlib.h>
#include "main.h"

/**
 * _strdup - definition
 * Description: a function that returns a pointer
 *  to a newly allocated space in memory,
 *   which contains a copy of the string given as a parameter.
 *    Memory for the new string is obtained with malloc,
 *     and can be freed with free.
 * @str: source string to duplicate
 * Return: NULL if str = NULL,
 *  On success, returns a pointer to the duplicated string.
 *  It returns NULL if insufficient memory was available
 * FYI: The standard library provides a similar function: strdup.
 */
char *_strdup(char *str)
{
	char *str2 = NULL;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0') /* strlen */
	{
		i++;
	}

	str2 = (char *) malloc((i + 1) * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		str2[j] = str[j];
	}
	str2[i] = '\0';
	return (str2);
}

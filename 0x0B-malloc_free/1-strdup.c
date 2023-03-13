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
	char *str2;
	int i;

	str2 = (char *) malloc(sizeof(str));
	if (!str2 || str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		str2[i] = str[i];
	return (str2);
}

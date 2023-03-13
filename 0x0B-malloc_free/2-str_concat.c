#include <stdlib.h>
#include "main.h"

/**
 * str_concat - definition
 * Description: concatenates two strings.
 * @s1: pointer to first string to concatenate
 * @s2: pointer to second string to concatenate
 * Return: pointer to a newly allocated space in memory
 *  containing the contents of s1, followed by contents of s2
 *   and null terminated. If NULL is passed, treat it as an empty string
 *    The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, m;
	char *string;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	k = i + j;
	string = (char *) malloc((k + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);

	for (m = 0; m < i; m++)
	{
		string[m] = s1[m];
	}
	for (l = 0; l < j; l++)
	{
		string[m] = s2[l];
		m++;
	}
	string[k] = '\0';
	return (string);
}

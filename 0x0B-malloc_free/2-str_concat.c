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
	int s1_len, s2_len, k, l, m;
	char *string;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	s1_len = 0;
	if (s1 != NULL)
	{
		while (s1[s1_len] != '\0')
			s1_len++;
	}
	s2_len = 0;
	if (s2 != NULL)
	{
		while (s2[s2_len] != '\0')
			s2_len++;
	}
	k =  s1_len + s2_len;
	string = (char *) malloc((k + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);

	m = 0;
	if (s1 != NULL)/* concatenate 1st str if not null */
	{
		for (; m <  s1_len; m++)
			string[m] = s1[m];
	}
	l = 0;
	if (s2 != 0) /* concatenate 2nd str if not null */
	{
		for (; l < s2_len; l++)
		{
			string[m] = s2[l];
			m++;
		}
	}
	string[k] = '\0'; /* add a teminating null */
	return (string);
}

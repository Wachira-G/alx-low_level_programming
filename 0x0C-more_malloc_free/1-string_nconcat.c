#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - definition
 * Description: a function that concatenates two strings.
 * Return: pointer to a newly allocated space in memory, which contains s1,
 *  followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * @s1: First string
 * @s2: Second string
 * @n: no of n chars to include
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t len1 = 0, len2 = 0, i = 0, j;

	if (s1 == NULL) /* change to empty strings if null */
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] || s2[len2])/* get s1 and s2 length */
	{
		len1 = len1 + 1;
		len2 = len2 + 1;
	}

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}

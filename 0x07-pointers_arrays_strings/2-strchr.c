#include "main.h"

/**
 * _strchr - definition
 * Description: locates a character in a string
 * @s: the string where to search the character
 * @c: the character we are searching for
 * Return: a pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 * FYI: The standard library provides a similar function: strchr
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

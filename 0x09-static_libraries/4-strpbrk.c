#include "main.h"

/**
 * _strpbrk - definition
 * Description: searches a string for any of a set of bytes
 * (locates the first occurrence in the string s of any of the bytes
 * in the string accept)
 * @s: string to search through
 * @accept: set of bytes to search for in string - occurence of one
 * Return: pointer to position of first match
 * (byte in s that matches one of the bytes in accept)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}
	return (0);
}

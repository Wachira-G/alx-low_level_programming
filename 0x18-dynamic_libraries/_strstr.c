#include "main.h"
/**
 * _strstr - Find a substring in a string.
 * @haystack: The string to search.
 * @needle: Substring to find.
 * Return: Pointer the first occurrence of the @needle in @haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return ((char *) haystack);

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return ((char *) haystack);
		haystack++;
	}

	return (NULL);
}

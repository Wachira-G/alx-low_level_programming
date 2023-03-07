#include "main.h"

/**
 * _strstr - definition
 * Description: locates a substring -  it finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: the string to search substring in
 * @needle: the substring we are searching for in string
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 * FYI: The standard library provides a similar function: strstr
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	if (haystack == 0 || needle == 0 ||
		haystack[0] == '\0' || needle[0] == '\0')
		/* null pointers and empty strings*/
	{
		return (0);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
			/* 1st char in needle==current char in hay*/
		{
			k = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[k] == needle[j])
					k++;
			}
			if (k - i == j)
				return (&haystack[i]);
		}
	}
	return (0);
}

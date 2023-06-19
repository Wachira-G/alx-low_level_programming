#include "main.h"
/**
 *_strpbrk - Searches a string for a give byte.
 *@str: String to scan.
 *@accept: Bytes of string to be serached.
 *
 *Return: A pointer to the byte.
 */
char *_strpbrk(char *str, char *accept)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (str[i] == accept[j])
			{
				return (str + i);
			}
		}
	}
	return (NULL);
}


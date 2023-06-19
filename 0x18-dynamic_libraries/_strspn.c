#include "main.h"
/**
 * _strspn - definition
 * Description: gets the length of a prefix substring
 * @s: string to ..
 * @accept: ss....
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * FYI: The standard library provides a similar function: strspn
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, match, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{	match = 1;
				break;
			}
		}
		if (!match)
		{
			break;
		}
		else
			length++;
	}
	return (length);
}

#include "main.h"
/**
 * _strlen - calculates the lenght of a string
 * @s: the string
 *
 * Return: the length of a string
 * (number of bytes in the string pointed to by s)
 */
int _strlen(char *s)
{
	int len = 0;
	char *p = s;

	if (s == NULL)
		return (0);
	while (*p != '\0')
		p++;
	len = (int) (p - s); /* diff of 2 pointers is ptrdiff type */
	return (len);
}


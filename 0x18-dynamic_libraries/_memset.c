#include "main.h"
/**
 * _memset - definition
 * Description: fills the first n bytes of the memory area pointed to by s
 *  with the constant byte b
 *  @s: the memory area pointed to and to be filled with b
 *  @b: byte to fill the mem area with
 *  @n: number of locations to fill with b
 *  Return: a pointer to the memory area s
 *  FYI: The standard library provides a similar function: memset
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

#include "main.h"
/**
 * _memcpy - definition
 * Description: copies n bytes from memory area src to memory area dest
 * @dest: destination of what is copied (where to save)
 * @src: the source of the data
 * @n: size of what to copy in bytes
 * Return: a pointer to dest
 * FYI: The standard library provides a similar function: memcpy.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

#include "main.h"

/**
 * _strncat - definition
 * Description: concatenates two strings by
 * appending src to the dest then add terminating null byte
 * while using at most n bytes from src
 *
 * @dest: destination string
 * @src: source string
 * @n: limit of bytes of src to use
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, src_len = 0, dest_len = 0;

	while (src[src_len] != '\0')
		src_len++;
	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i <= dest_len; i++)
	{
		if (i < n)
			dest[dest_len + i] = src[i];
	}
	return (dest);
}

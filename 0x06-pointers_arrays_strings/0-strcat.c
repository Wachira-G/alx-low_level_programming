#include "main.h"

/**
 * _strcat - definition
 * Description: concatenates two strings by
 * appending src to the dest then add terminating null byte
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, src_len = 0, dest_len = 0;

	while (src[src_len] != '\0')
		src_len++;
	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i <= dest_len; i++)
		dest[dest_len + i] = src[i];
	return (dest);
}

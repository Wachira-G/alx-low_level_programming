#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte ('\0'),
 * to the buffer pointed to by dest.
 * @dest: pointer to buffer where we will store the string
 * @src: pointer to location of string
 *
 * Return: a pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (src == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0'; /* null terminator to dest */
	return (dest);
}

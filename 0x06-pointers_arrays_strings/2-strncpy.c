#include "main.h"

/**
 * _strncpy - definition
 * Description: copies a string and works exactly as the standard strncpy as-
 * The function copies the string pointed to by src,
 * including the terminating null byte ('\0'),
 * to the buffer pointed to by dest.
 * The strings may not overlap,
 * that is src and dest cannot point ot the same memory location.
 * and the destination string dest must be large enough to receive the  copy-
 * otherwise it may ovewrite mem locations beyond buffer
 * know as: buffer overruns!
 * hence upredictable behaviour such as crashes and security vulnerability
 * in addition, at most n bytes of src are copied.
 * Warning: If there is no null byte among the first n bytes of src
 * the string placed in dest will not be null-terminated.
 * If the length of src is less than  n,
 * _strncpy()  writes  additional null bytes to dest
 * to ensure that a total of n bytes are written.
 *
 * @dest: destination
 * @src: source
 * @n: limit of bytes of src-source
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

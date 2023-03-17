#include <stdlib.h>
#include <stdint.h>
#include "main.h"

/**
 * _calloc - definition
 * Description: a function that allocates memory for an array, using malloc.
 *  the function allocates memory for an array of nmemb elements
 *  of size bytes each
 * Return: a pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * The memory is set to zero
 * @nmemb: number of elements to store in array
 * @size: size of each member
 * FYI: The standard library provides a different function: calloc.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i;
	char *arr;

	if (nmemb == 0 || size == 0)
	       /* || size > SIZE_MAX || size * nmemb > SIZE_MAX)*/
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}
	return ((void *)arr);
}

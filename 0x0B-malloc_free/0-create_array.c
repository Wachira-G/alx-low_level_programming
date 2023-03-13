#include <stdlib.h>
#include "main.h"

/**
 * create_array - definition
 * Description: creates an array of chars,
 *  and initializes it with a specific char
 * @size: number of elements in the array
 * @c: the char to initialize the array with
 * Return: NULL if size = 0,
 * a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *) malloc(size * sizeof(char));

	if (!arr || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

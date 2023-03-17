#include <stdlib.h>
#include "main.h"

/**
 * array_range -  a function that creates an array of integers.
 * array created should contain all the values from min (included)
 *  to max (included), ordered from min to max
 * Return: the pointer to the newly created array
 * If min > max, return NULL, If malloc fails, return NULL
 * @min: starting value in array
 * @max: last value in array
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		arr[i] = i + min;
	return (arr);
}

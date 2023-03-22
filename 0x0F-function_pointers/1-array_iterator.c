#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 *  on each element of an array.
 * @size: the size of the array
 * @action: is a pointer to the function you need to use
 * @array: array to iterate through
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

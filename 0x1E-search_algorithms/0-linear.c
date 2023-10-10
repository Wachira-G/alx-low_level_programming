#include "search_algos.h"


/**
 * linear_search - searches a value in an array of integers
 * using linear search algorithm
 *
 * @array: pointr to the first element of the array to search in
 * @size: number of elementss in array
 * @value: value to search for
 *
 * Return: first index where value is located else -1 if:
 * array == NULL, or value is not present in array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (index < size)
	{
		int value_at = array[index];

		printf("Value checked array[%ld] = [%d]\n", index, value_at);
		if (value_at == value)
			return (index);
		index++;
	}
	return (-1);
}

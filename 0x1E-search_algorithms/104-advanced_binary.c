#include "search_algos.h"

void array_printer(int *array, size_t size);


/**
 * advanced_binary - searches a value in an array of integers
 * using binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elementss in array
 * @value: value to search for
 *
 * Return: first index where value is located else -1 if:
 * array == NULL, or value is not present in array
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high;

	if (array == NULL || size == 0)
		return (-1);
	high = size - 1;

	while (low <= high)
	{
		int mid_value;
		size_t mid = low + (high - low) / 2;

		if (mid >= size)
			return (-1);
		array_printer(&array[low], high - low + 1);
		mid_value = array[mid];

		if (mid_value == value)
		{
			while (array[mid - 1] == value)
				mid--;
			return (mid);
		}
		else if (mid_value < value)
			low = mid + 1;
		else if (mid_value > value)
			high = mid - 1;
	}

	return (-1);
}

/**
 * array_printer - prints an array
 * @array: array to print
 * @size: size of array
 */
void array_printer(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array: ");
	while (i < size - 1)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);
}

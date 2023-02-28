#include "main.h"
#include <stdio.h>

/**
 * print_array - definition
 * Description: a function that prints n elements of an array of integers,
 * followed by a new line.
 * where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order
 * as they are stored in the array
 * @a: array
 * @n: number of elelments
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[i]);
}

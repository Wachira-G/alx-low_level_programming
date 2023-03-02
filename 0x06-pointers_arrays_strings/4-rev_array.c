#include "main.h"

/**
 * reverse_array - definition
 * Description: reverses the content of an array of integers
 * @a: the array to reverse
 * @n: length of array
 * return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

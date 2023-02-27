#include "main.h"

/**
 * swap_int - function decration
 * Description: swaps the values of two variables (int)
 * @a: first variable to swap
 * @b: second variable to swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp1 = *a; /* dereference(get value pointed to) of a */
	int temp2 = *b;

	*a = temp2;
	*b = temp1;
}

#include "main.h"

/**
 * clear_bit - 4-clear_bit.c
 * @n: pointer to integer you want to set a bit in.
 * @index: is the index, starting from 0 of the integer you want to set a bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index >= 64)
		return (-1);
	mask = mask << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}

#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: pointer to an int that we want to set a bit.
 * @index:  is the index (location) starting from 0,
 * where we want to set the bit to 1.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index >= 64)
		return (-1);
	mask = mask << index;
	*n = *n | mask;
	return (1);
}

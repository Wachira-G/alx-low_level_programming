#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: number to set bit in
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int result, mask = 1;

	if (index >= 64)
		return (-1);
	/* make mask by shifting one to the index */
	mask = mask << index;
	/* set the bit to 1 if not already 1 by ORing with mask */
	result = *n | mask;
	/* return success - trick step! */
	*n = result;
	return (1);
}

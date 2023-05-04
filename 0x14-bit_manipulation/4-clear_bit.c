#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: number you want to set bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int result, mask = 1;

	if (index >= 64)
		return (-1); /* failure */
	/* set make mask by shifting 1 to index position */
	mask = mask << index;
	/* invert the mask to have all 1s and 0 at index */
	mask = ~mask;
	/* do AND to set bit at index to zero */
	result = *n & mask;
	/* adjust out number to the new value */
	*n = result;
	return (1); /* success */
}

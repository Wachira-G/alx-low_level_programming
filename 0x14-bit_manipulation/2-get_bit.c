#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: number to get bit from
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int result, mask = 1;

	if (index >= 64)
		return (-1);
	/* configure mask to move the 1 to index by left shifting */
	mask = mask << index;
	/* get bit at index by using bitwise AND to compare n and mask */
	result = n & mask;
	if (result) /* result is greater than zero */
		return (1);
	return (0);
}

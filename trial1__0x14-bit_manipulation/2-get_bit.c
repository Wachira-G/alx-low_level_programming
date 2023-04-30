#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the integer input to read at index.
 * @index:  is the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1, value;

	if (index >= 64)
		return (-1);
	mask = mask << index;
	value = n & mask;
	if (value)
		return (1);
	return (0);
}

#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *  to get from one number to another.
 * @n: First number, the one you need to flip bits
 * @m: second number, the one you want to change the first into it.
 *
 * Return: the number of bits you need to flip.
 *
 * You are not allowed to use the % or / operators.
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;
	while (result != 0)
	{
		if (result & 1)
			count++;
		result = result >> 1;
	}
	return (count);
}

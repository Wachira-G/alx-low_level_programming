#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another.
 * @m: first number
 * @n: second number
 * Return: number of bits you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	/* get differences of bits between the two */
	result = n ^ m;

	/* if the two are not similar or subsequent iteration result ! zero*/
	while (result != 0)
	{
		if (result & 1)
			count++;
		result = result >> 1;
	}
	return (count);
}

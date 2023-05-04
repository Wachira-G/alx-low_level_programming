#include <stdio.h>
#include "main.h"

/**
 * _strlen - calculates the length of a string.
 * @b: the string
 * Return: length of a string
 */
unsigned int _strlen(const char *b)
{
	unsigned int i = 0;

	while (b[i] != '\0')
		i++;
	return (i);
}

/**
 * chartoi - converts a character into a unsigned integer
 * @c: character to convert to int
 * Return: an unsigned int
 */
unsigned int chartoi(char c)
{
	return (c - '0');
}

/**
 * _pow - calculates the power of n raised to k
 * @n: the number to raise
 * @k: the number of times to multiply n
 * Return: the product of the power.
 */
unsigned int _pow(unsigned int n, unsigned int k)
{
	if (k == 0)
		return (1);
	else
		return (n * _pow(n, k - 1));
}

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int.
 * @b: number in binary represented form of a string
 * Return: an unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, number = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	for (i = 0; i <= len - 1; i++)
	{
		if ((b[i] != '1') && (b[i] != '0'))
		{
			return (0);
		}
		number = number + (_pow(2, len - (i + 1)) * chartoi(b[i]));
	}
	return (number);
}

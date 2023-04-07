#include <stddef.h>
#include "main.h"

unsigned int _atoui(char);
unsigned int my_pow(unsigned int, unsigned int);

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is a pointer pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,or 0 if:
 *  there is one or more chars in the string b that is not 0 or 1
 *  b is NULL
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, num = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	while (len > 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += _atoui(b[i]) * my_pow(2, len - 1);
		len--;
		i++;
	}
	return (num);
}

/**
 * _atoui - convers a character into an unsigned integer.
 * @c: character we want to convert to unsigned int.
 *
 * Return: an unsigned integer.
 *
 */
unsigned int _atoui(char c)
{
	unsigned int i = c - '0';

	return (i);
}

/**
 * my_pow - returns the result of a number(base) raised to power exponent.
 * Description: this is my own implementation of math.h's pow().
 * @base: the number to multiply.
 * @exponent: the number of times the base will multiply by itself
 *
 * Return: an unsigned int which is the result of this multiplication.
 *
 */
unsigned int my_pow(unsigned int base, unsigned int exponent)
{
	unsigned int i, result = 1;

	for (i = 0; i < exponent; i++)
		result *= base;
	return (result);
}

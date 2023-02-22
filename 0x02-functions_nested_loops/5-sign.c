#include "main.h"

/**
 * print_sign - definition
 * Description: prints the sign of a number
 * @n: the number ot check
 * Return: Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;

	} else if (n == 0)
	{
		_putchar('0');
		i = 0;
	} else
	{
		_putchar('-');
		i = -1;
	}
	return (i);
}

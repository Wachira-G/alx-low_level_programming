#include "main.h"
#include <stdio.h>

int _putchar(char c);

/**
 * print_number - definition
 * Description: prints an integer and not use long, arrays,
 * pointer not hard-coded special values
 * also supposed to use _putchar only
 * @n: integer to print
 * Returns: nothing
 */

void print_number(int n)
{
	int temp = n, digitCount = 0;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		temp *= -1;
		n *= -1;
	}

	while (temp != 0)
	{
		temp /= 10;
		digitCount++;
	}

	while (digitCount > 0)
	{
		int i, currentDigit, divisor = 1;

		for (i = 1; i < digitCount; i++)
			divisor *= 10;

		currentDigit = n / divisor;
		_putchar(currentDigit + '0');

		n %= divisor;
		digitCount--;
	}
}

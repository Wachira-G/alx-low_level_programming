#include "main.h"

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
	int i = 0;
	char str[100];
	int neg_sign;

	if (n < 0)
	{
		neg_sign = 1;
		n *= -1;
	}

	do {
		str[i++] = (n % 10) + '0';
		n = n / 10;
	} while (n > 0);

	if (neg_sign)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	for (; i >= 0; i--)
		_putchar(str[i]);
}

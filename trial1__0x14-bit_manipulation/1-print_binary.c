#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print.
 *
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	int i, j, first_1_found = 0;
	char byte, bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = sizeof(n) - 1; i >= 0; i--)
	{
		byte = *(((char *)&n) + i);  /* take each byte of n */
		for (j = 0; j < 8; j++)
		{
			/* get last char */
			/* shift byte one position left*/
			bit = (byte >> (7 - j)) & 1;

			if (bit == 1)
			{
				first_1_found = 1;
				_putchar(bit + '0');
			}
			else if (first_1_found)
			{
				_putchar(bit + '0');
			}
		}
	}
}

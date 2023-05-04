#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int i, j, flag = 0;
	char byte, bit;

	if (n == 0)
		_putchar('0' + n);
	/* an int is normally saved in a 32 or 64 bit chunk in memory */
	/* therefore read byte by byte */
	for (i = sizeof(n) - 1; i >= 0; i--)
	{
		byte = *(((char *)&n) + i);
		/* read bit by bit inside bit (8 bits per byte */
		for (j = 0; j < 8; j++)
		{
			bit = (byte >> (7 - j)) & 1;

			if (bit)
			{
				flag = 1;
				_putchar('0' + bit);
			}
			else if (flag)
			{
				_putchar('0' + bit);
			}
		}
	}
}

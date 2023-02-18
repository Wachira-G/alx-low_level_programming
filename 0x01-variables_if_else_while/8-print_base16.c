#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: The program prints 0-16 in hexadecimal
 *
 * Return: - Always 0 (succeess)
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * print_line -def
 * Description: prints n underscores if n is greater than 0
 * @n: number of _ to print
 */

void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

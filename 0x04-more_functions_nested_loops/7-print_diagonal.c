#include "main.h"

/**
 * print_diagonal - define
 * Description: prints a diagonal line across the terminal
 * @n: the dimension of the diagonal
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j < i)
				{
					_putchar(' ');
				} else if (j == i)
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
}

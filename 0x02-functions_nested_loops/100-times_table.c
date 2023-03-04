#include "main.h"

/**
 * print_times_table - definition
 * Description prints the n times table stating with 0
 * n should be not be greater than 15, if more return nothing
 * @n: limit of times table
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j;

	if (n <= 15)
	{
		for (i = 0; i <= n; i++) /* loop top to bottom */
		{
			for (j = 0; j <= n; j++) /* loop across */
			{
				int result = (i * j);
				/*if it the first char across "dont prepend"*/
				if (j == 0)
				{}
				else if (result < 10) /* 0-9 */
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (result < 100) /* 10-99 */
				{
					_putchar(' ');
					_putchar(result / 10 + '0');
				}
				else /* 100+ */
				{
					_putchar(result / 100 + '0');
					_putchar((result / 10) % 10 + '0');
				}
				_putchar(result % 10 + '0');

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');

		}
	}
}

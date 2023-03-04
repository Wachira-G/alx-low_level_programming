#include "main.h"

/**
 * times_table - definition
 * Description prints the 9 times table stating with 0
 * Return: nothing
 */

void times_table(void)
{
	int i, j;
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			c = ((i * j));
			if (j == 0)
			{}
			else if (c / 10 == 0 && j != 0)
			{
				_putchar(' ');
			} else
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

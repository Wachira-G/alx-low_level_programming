#include "main.h"

void mod_int(int i);

/**
 * more_numbers - define
 * Description: prints 0-9
 */

void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
			{
				mod_int(i);
			} else
			{
				_putchar((i / 10) + '0');
				mod_int(i);
			}
		}
		_putchar('\n');
	j++;
	}
}

/**
 * mod_int -prints the last char of 1 or 2 digit no
 * Description: as above
 * @i: character to print
 */

void mod_int(int i)
{
	_putchar((i % 10) + '0');
}

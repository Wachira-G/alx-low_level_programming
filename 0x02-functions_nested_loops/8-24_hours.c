#include "main.h"

void mins(int, int);
void func(int, int, int, int);

/**
 * jack_bauer - definition
 * Description: prints time 00:00 to 23:59
 * Return: none
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 2; i++)
	{
		if (i == 2)
		{
			for (j = 0; j <= 3; j++)
				mins(i, j);
		} else
		{
			for (j = 0; j <= 9; j++)
				mins(i, j);
		}
	}
}

/**
 * mins - definition
 * Description: handles the min side and calls func to print time
 * @i: the tens side in an hour
 * @j: the ones side in an hour
 * Return: none
 */

void mins(int i, int j)
{
	int k, m;

	for (k = 0; k <= 5; k++)
	{
		for (m = 0; m <= 9; m++)
			func(i, j, k, m);
	}
}

/**
 * func - definition
 * Description: combines all the varilables and prints output - 00:00 to 23:59
 * @i: tens hours
 * @j: ones hours
 * @k: tens mins
 * @m: ones mins
 * Return: none
 */
void func(int i, int j, int k, int m)
{
	_putchar(i + '0');
	_putchar(j + '0');
	_putchar(':');
	_putchar(k + '0');
	_putchar(m + '0');
	_putchar('\n');
}

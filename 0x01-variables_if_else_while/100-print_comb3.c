#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry pint
 *
 * Description - the program prints the combination of two digits
 * 01 and 10 are condidered the same and the smaller one is taken
 * the output is sorted
 * the program used only five putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	int j;

	{
		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				if (i == j || i > j)
				{
					continue;
				} else
				{
					putchar('0' + i);
					putchar('0' + j);

					if (i != 8 || j != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

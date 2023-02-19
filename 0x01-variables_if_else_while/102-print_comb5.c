#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The program prints "00 01, " ... "98 99"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (m = 0; m <= 9; m++)
				{
					int num1 = (i * 10) + j;
					int num2 = (k * 10) + m;

					if (num1 >= num2 || num1 > 98)
					{
						continue;
					} else
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(' ');
						putchar('0' + k);
						putchar('0' + m);
					}

					if (i == 9 && j == 8 && k == 9 && m == 9)
					{
						putchar('\n');
					} else
					{
						putchar(',');
						putchar(' ');
					}

				}
			}
		}
	}
	return (0);
}

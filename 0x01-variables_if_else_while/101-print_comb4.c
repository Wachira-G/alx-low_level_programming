#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The program prints three numbers each less than the other-
 * without repetion such that 012 is valid and 102 is not
 * each 3 followed by comma and space except the last
 * use only max of 6 putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	int j;

	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if ((i == j || i == k || j == k) || (i > k || i > k || j > k))
				{
					continue;
				} else
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);

					if (i != 7 || j != 8 || k != 9)
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

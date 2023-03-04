#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - definition
 * Description: prints all natural numbers from n to 98 followed by new line
 * @n: starting number
 * return: nothing
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}

	} else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}

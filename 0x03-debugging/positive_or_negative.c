#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program will assign a random number
 *to the variable n each time it is executed
 *
 */

void positive_or_negative(int n)
{
	if (n == 0)
	{
		printf("%d is zero", n);
	} else if (n > 0)
	{
		printf("%d is positive", n);
	} else
	{
		printf("%d is negative", n);
	}
	printf("\n");
}

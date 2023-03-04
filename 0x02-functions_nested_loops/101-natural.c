#include <stdio.h>
#include "main.h"

/**
 * natural_numbers - definition
 * Description: computes and prints the sum
 * of all the multiples of 3 or 5 below number (excluded),
 * followed by a new line.
 * @number: the upper limit under which to calc multiples
 * Return: sm of the the multiiples
 */

int natural_numbers(int number)
{
	int i, sum = 0;

	for (i = 0; i < number; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	return (sum);
}

/**
 * main - entry point
 * Description: just runs out program
 * Return: alway 0
 */

int main(void)
{
	int i = natural_numbers(1024);

	printf("%d\n", i);
	return (0);
}

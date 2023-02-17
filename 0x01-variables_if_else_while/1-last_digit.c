#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: This program takes a random number and assigns it to n
 * then test whether n equals to 0, greater than 5 or less than 6
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	i = n % 10;

	if (i == 0)
	{
		printf("Last digit of %d is %d and is 0", n, i);
	} else if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, i);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, i);
	}
	printf("\n");
	return (0);
}

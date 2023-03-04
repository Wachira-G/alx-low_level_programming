#include <stdio.h>

/**
 * fibonacci - definition
 * @n: the number of fibonaccis to calculate
 * Description: prints n fibonacci numbers
 * Return: nothing
 */

void fibonacci(int n)
{
	int i = 0;
	long int start = 0, second = 1, temp, last, new;

	printf("%ld, %ld, ", start, second);
	temp = start;
	last = second;

	while (i < n - 3)
	{
		new = temp  + last;
		temp = last;
		last = new;
		printf("%ld, ", new);
		i++;
	}
	printf("%ld\n", last + temp);
}

/**
 * main - entry point
 * Description: runs outs program to get ouput
 * Return: Always 0
 */

int main(void)
{
	fibonacci(50);
	return (0);
}

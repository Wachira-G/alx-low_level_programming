#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * mul - definition
 * @a: first number
 * @b: second number
 * Return: the product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}


/**
 * add - definition
 * @a: first number
 * @b: second number
 * Return: the sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}


/**
 * main - entry point
 * @argc: number of cli arguments
 * @argv: list of cli arguments
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && strcmp(argv[i], "0") != 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = add(sum, atoi(argv[i]));
	}
	printf("%d\n", sum);
	return (0);
}

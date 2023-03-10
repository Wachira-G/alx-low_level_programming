#include <stdio.h>
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
 * main - entry point
 * @argc: number of cli arguments
 * @argv: list of cli arguments
 * Return: Always 0;
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = mul(atoi(argv[1]), atoi(argv[2]));
	printf("%d\n", i);

	return (0);
}

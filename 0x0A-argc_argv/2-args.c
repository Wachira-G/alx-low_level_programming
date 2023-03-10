#include <stdio.h>

/**
 * main - entry point
 * @argc: number of cli arguments
 * @argv: list of cli arguments
 * Return: Always 0;
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

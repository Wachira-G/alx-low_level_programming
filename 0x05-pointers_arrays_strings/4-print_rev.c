#include "main.h"

int _putchar(char c);

/**
 * print_rev - definition
 * Description: prints a string in reverse followed by new line
 * @s: string to reverse and print
 * Return: nothing
 */

void print_rev(char *s)
{
	int counter = 0, i = 0;

	while (s[i] != 0)
	{
		counter += 1;
		i++;
	}
	for (; counter > 0; counter--)
	{
		_putchar(s[counter - 1]);
	}
	_putchar('\n');
}

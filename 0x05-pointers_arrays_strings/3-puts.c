#include "main.h"

int _putchar(char c);

/**
 * _puts - definitiona
 * Description: prints a string followed by a new line to stdout
 * @str: string to print
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}

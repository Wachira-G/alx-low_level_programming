#include "main.h"

int _putchar(char c);

/**
 * puts2 - definition
 * Description: prints every other char form a str
 * followed by a new line
 * @str: string to print
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}

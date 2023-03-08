#include "main.h"

/**
 * _puts_recursion - definition
 * Description: prints a string, followed by a new line
 * @s: string to print out
 * Return: nothing
 * FYI: The standard library provides a similar function: puts
 */

void _puts_recursion(char *s)
{
	int  i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	s++; /* or s = s + 1 */
	_puts_recursion(s);
}

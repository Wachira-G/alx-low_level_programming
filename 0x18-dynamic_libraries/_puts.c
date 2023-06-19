#include "main.h"
/**
 *_puts - Print a string.
 *@str: String.
 *Return: Void.
 */
void _puts(char *str)
{
	write(STDOUT_FILENO, str, _strlen(str));
}

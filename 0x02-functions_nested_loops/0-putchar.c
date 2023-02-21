#include <unistd.h>

/* Declaration of _putchar function */
int _putchar(char c);

/**
 * main - Entry point
 * Description: calls _putchar function to print "_putchar" on a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Call _putchar function */
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


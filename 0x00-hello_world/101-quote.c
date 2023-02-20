#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: The program prints -
 * 'and that piece of art is useful - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error.
 *
 * Return: Always 1
 */

int main(void)
{
	const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	size_t len = strlen(quote);

	write(STDERR_FILENO, quote, len);
	return (EXIT_FAILURE);
}

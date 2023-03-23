#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *sep = separator;

	if (sep == NULL)
		sep = "";
	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	/*va_arg(args, const char *);*/
	/*va_arg(args, int);*/

	for (i = 2; i < n + 1; i++)
	{
		printf("%d%s", va_arg(args, int), sep);
	}
	printf("%d", va_arg(args, int));
	va_end(args);
	printf("\n");
}

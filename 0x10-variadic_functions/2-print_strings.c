#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * test_null_str - tests if string is null
 * @s: the string to test
 * Return: the string if string is not null
 * "(nil)" if the string is null
 */
char *test_null_str(char *s)
{
	if (s == NULL)
		return ("(nil)");
	return (s);

}

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *sep = separator;
	char *str, *last_str;

	if (sep == NULL)
		sep = "";
	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 2; i < n + 1; i++)
	{
		str = va_arg(args, char *);
		printf("%s%s", test_null_str(str), sep);
	}
	last_str = test_null_str(va_arg(args, char *));
	printf("%s", last_str);
	va_end(args);
	printf("\n");
}

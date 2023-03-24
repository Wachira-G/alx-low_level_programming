#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: is a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 * see example
 * You are not allowed to use for, goto, ternary operator, else, do ... while
 * You can use a maximum of
 * 2 while loops
 * 2 if
 * You can declare a maximum of 9 variables
 * You are allowed to use printf
 * Print a new line at the end of your function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *final[200] = {NULL};
	idents arr = {
		{'i', "%d"},
		{'c', "%c"},
		{'f', "%f"},
		{'s', "%s"},
		{NULL, NULL},
	}

	i = 0, j = 0;
	while (format[i] != NULL)
	{
		while (j < 4)
		{
			if (arr[j].id == format[i])
			{
				final[i] = arr[j].rep;
				break;
			}
			j++;
		}
		i++;
	}

	va_start(args, format);

	va_arg(args, char *);

	va_end(args);
}

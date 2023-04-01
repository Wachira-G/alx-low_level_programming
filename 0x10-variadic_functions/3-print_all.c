#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_int - prints an integer
 * @i: integer to print
 */
void print_int(int i)
{
	printf("%d", i);
}
/**
 * print_float - prints a float
 * @f: float to print
 */
void print_float(float f)
{
	printf("%f", f);
}
/**
 * print_string - prints a string
 * @s: string to print
 */
void print_string(char *s)
{
	printf("%s", s);
}
/**
 * cases - search for specifiers -like in printf to use in printing
 * @a: specifier char to check
 * @args: va_list to fetch argument
 * Return: integer 0 or 1 for match in case
 */
int cases(char a, va_list args)
{
	char *s;
	int match = 0;

	switch (a)
	{
			case 'i':
				print_int(va_arg(args, int));
				match = 1;
				break;
			case 'f':
				print_float(va_arg(args, double));
				match = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				match = s == NULL ? (printf("(nil)"), 1) : (print_string(s), 1);
				break;
			default:
				match = 0;
				break;
	}
	return (match);
}
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
	int i = 0, len = 0, match = 0;
	va_list args;

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	while (format[len] != '\0')
		len++;

	va_start(args, format);
	while (format[i] != '\0')
	{
		match = 0;
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
			match = 1;
		}
		match = (match == 0 ? cases(format[i], args):match);

		i < (len - 1) && match ? printf(", ") : 0;
		i++;
	}
	va_end(args);
	printf("\n");
}

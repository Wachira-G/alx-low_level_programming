#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


void print_char(char c)
{
	printf("%c", c);
}
void print_int(int i)
{
	printf("%d", i);
}
void print_float(float f)
{
	printf("%f", f);
}
void print_string(char *s)
{
	printf("%s", s);
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
	char *s;

	while (format[len] != '\0')
		len++;
	
	if (format == NULL)
	{
		printf("(nil)\n");
		return;
	}
	va_start(args, format);
	while (format[i] != '\0')
	{
		match = 0;
		switch (format[i])
		{
			case 'c':
				 print_char(va_arg(args, int));
				 match = 1;
				 break;
			case 'i':
				print_int(va_arg(args,int));
				match = 1;
				 break;
			case 'f':
				print_float(va_arg(args, double));
				match = 1;
				 break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				print_string(s);
				match = 1;
				 break;
			default:
				 break;
		}
		if (i < len - 1 && match)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: first argument
 * Return: an integer
 * If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);
	for(i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}

#include "main.h"

/**
 * factorial - definition
 * Description: returns the factorial of a given number
 * @n: the number to return its factorial
 * Return: the factorial of n
 * If n is lower than 0, the function should return -1 to indicate an error
 * Factorial of 0 is 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

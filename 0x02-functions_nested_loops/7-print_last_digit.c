#include "main.h"

/**
 * print_last_digit - definition
 * Description: returns the absolute last digit of a number
 * @n: the number to change and return
 * Return: last absolute digit of the input
 */

int print_last_digit(int n)
{
	int i;

	if (n >= 0)
	{
		i = n % 10;
	}
	else
	{
		i = (n % 10) * -1;
	}
	_putchar(i + '0');
	return (i);
}

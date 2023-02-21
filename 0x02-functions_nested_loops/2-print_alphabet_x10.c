#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: The program prints the alphabet 10 times
 * without using the std library
 *
 * Return: Alway 0 (success)
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

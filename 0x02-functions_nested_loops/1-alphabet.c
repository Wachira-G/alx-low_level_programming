#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: The program prints the alphabet without using the std library
 * Return: Alway 0 (success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

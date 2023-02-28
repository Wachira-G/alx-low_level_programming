#include "main.h"

int _putchar(char c);

/**
 * puts_half - definition
 * Description: a function that prints the second half of a string,
 * followed by a new line
 * If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: input string
 * Return: nothing
 */

void puts_half(char *str)
{
	int str_length = 0;
	int iterator, n;

	while (str[str_length] != '\0')
		str_length++;

	if (str_length % 2 == 0)
	{
		n = str_length / 2;
	} else
	{
		 n = (str_length - 1) / 2;
	}

	for (iterator = str_length - n; iterator < str_length; iterator++)
	{
		_putchar(str[iterator]);
	}
	_putchar('\n');
}

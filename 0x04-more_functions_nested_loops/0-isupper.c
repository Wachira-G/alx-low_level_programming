#include "main.h"

/**
 * main - define
 * Description: tests if c is uppercase
 * @c: character to test
 * Return: 1 if uppercae 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

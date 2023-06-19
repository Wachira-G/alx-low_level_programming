#include "main.h"
/**
 * _isdigit - define
 * Description: tests if c is uppercase
 * @c: character to test
 * Return: 1 if uppercae 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

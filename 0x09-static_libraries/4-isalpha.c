#include "main.h"

/**
 * _isalpha - definitaion
 * Description: the program check character if alphabet
 * and returns 1 or 0 if else
 * @c: The characer to check
 * Return: 1 if lower , 0 else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

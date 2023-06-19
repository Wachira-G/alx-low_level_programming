#include "main.h"
/**
 * _islower - definitaion
 * Description: the program check character if lower returns 1 or 0 if else
 * @c: The characer to check - represented as an integer
 * Return: 1 if lower , 0 else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

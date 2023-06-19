#include "main.h"
/**
 * _abs- definition
 * Description: returns the absolute number
 * @n: the number to change
 * Return: absolute of the input
 */

int _abs(int n)
{
	int i;

	if (n >= 0)
	{
		i = n;
	}
	else
	{
		i = n * -1;
	}
	return (i);
}

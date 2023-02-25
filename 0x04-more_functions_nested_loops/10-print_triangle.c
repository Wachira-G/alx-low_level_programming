#include "main.h"

/**
 * print_triangle - define
 * Description: prints a triangle using '#'
 * @size: the dimension of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (i < (j - 1))
				{
					_putchar(' ');
				} else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * _pow_recursion - definition
 * Description: returns the value of x raised to the power of y.
 * Return: value of x raised to the power of y.
 * @x: the base to raise
 * @y: the power to raise by
 * If y is lower than 0, the function should return -1
 * FYI: The standard library provides a different function: pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

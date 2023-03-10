#include "main.h"

/**
 * _strlen - returns the length of a string
 * Description: as above
 * @s: string to be evaluated
 * Return: int
 */

int _strlen(char *s)
{
	int counter = 0;
	int i = 0;

	while (s[i] != 0)
	{
		counter += 1;
		i++;
	}
	return (counter);
}

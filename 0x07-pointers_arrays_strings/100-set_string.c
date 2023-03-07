#include "main.h"

/**
 * set_string - definition
 * Description: sets the value of a pointer to a char
 * @s: pointer to a pointer to a string we want to replace with
 * @to: pointer to a string we want to replace with si
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}

#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - definition
 * Description: a function that prints a name
 * @name: the name we want to print
 * @f: function pointer taking a character array(string)
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}

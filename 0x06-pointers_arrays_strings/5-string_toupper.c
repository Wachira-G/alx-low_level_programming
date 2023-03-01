#include "main.h"

/**
 * string_toupper - definition
 * Description: changes all lowercase to uppercase
 * @string: string to change
 * Return: a string in uppercase
 */

char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] = string[i] - 'a' + 'A';
	}
	return (string);
}

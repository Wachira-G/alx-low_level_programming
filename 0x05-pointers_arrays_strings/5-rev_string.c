#include "main.h"

int _putchar(char c);

/**
 * rev_string - definition
 * Description: reverse the string in place - don confuse wit print rev
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[length - 1 - i];
		s[length - 1 - i] = s[i];
		s[i] = temp;
	}
}

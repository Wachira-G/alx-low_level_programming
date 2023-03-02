#include "main.h"

/**
 * leet - definition
 * Description: encodes a string int 1337:
 * a or A int 4, e or E into 3, o or O into 0, l or L into 7 and t or T into 1
 * @s: string to encode
 * Return: a pointer to the encoded string
 */

char *leet(char *s)
{
	int i, j;
	char lower[] = {'a', 'e', 'o', 'l', 't'};
	char le[] = {'4', '3', '0', '1', '7'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == (lower[j] - 'a' + 'A'))
				s[i] = le[j];
		}
	}
	return (s);
}

#include "main.h"

/**
 * cap_string - definition
 * Description: capitalises all words of a string
 * @str: string to change
 * Return: a string with all words capitalised
 */

char *cap_string(char *str)
{
	int i;
	unsigned long int j;
	int separators[] = {'\t', '\n', ' ', '!', '\"', '(', ')',
		',', '.', ';', '?', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < sizeof(separators); j++)
		{
			if (i == 0 || str[i - 1] == separators[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 'a' + 'A';
			}
		}
	}
	return (str);
}

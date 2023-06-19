#include "main.h"
/**
 * _strchr - scans the characters of the string
 * starting from the beginning (str)
 * until it finds the first occurrence of the specified character
 * or reaches the end of the string ('\0').
 *
 * @character: character to check.
 * @str: string to search
 *
 * Return: a pointer to the location of that character in the string,
 * if the character is found. If the character is not found,
 * it returns a null pointer (NULL).
*/
char *_strchr(char *str, char character)
{
	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		if (*str == character)
			return (str);
		str++;
	}
	return (NULL);
}


#include "main.h"

/**
 * _strcmp - definition
 * Description - compares two string
 * @s1: the first string
 * @s2: the second string
 * Return: an integer less than, equal to, or greater than zero
 * if s1 (or the first n bytes thereof) is found,
 * respectively, to be less than, to match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	do {
		j = s1[i] - s2[i];
		i++;
	} while (s1[i] == s2[i] && s1[i] != '\0');

	return (j);
}

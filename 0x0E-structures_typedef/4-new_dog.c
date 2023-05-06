#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination buffer to save the string
 * @src: source buffer of the string
 * Return: pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (src == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}

/**
 * _strlen - calculates the length of a string
 * @s: the string
 * Return: the length of a string
 */
size_t _strlen(const char *s)
{
	size_t len = 0;
	const char *p = s; /* use another pointer to point at 1st elm of s */

	if (s == NULL)
		return (0);
	while (*p != '\0') /* move along s until end of e ('\0') char */
		p++;
	/* subtracting two pointers gives a no of type ptrdiff_t hence cast */
	len = (size_t)(p - s);
	return (len);
}

/**
 * new_dog - definition
 * Description: a function that creates a new dog.
 * You have to store a copy of name and owner
 * @name: new dogs name and struct member
 * @age: struct member
 * @owner: struct member
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	size_t owner_len, name_len;

	/* allocate memory for doggo */
	doggo = malloc(sizeof(dog_t));
	if (!doggo)
		return (NULL);

	/*copy doggo's name */
	name_len = _strlen(name);
	doggo->name = malloc(name_len + 1);
	if (!doggo->name || !name)
	{
		free(doggo);
		return (NULL);
	}
	_strcpy(doggo->name, name);

	/* copy doggo's owner */
	owner_len = _strlen(owner);
	doggo->owner = malloc(owner_len + 1);
	if (!doggo->owner || !owner)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	_strcpy(doggo->owner, owner);

	/* copy doggo's age */
	doggo->age = age;

	return (doggo);
}

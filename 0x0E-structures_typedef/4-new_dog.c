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
	return (dest);
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
 * _new_dog - definition
 * Description: a function that creates a new dog.
 * You have to store a copy of name and owner
 * @name: new dogs name and struct member
 * @age: struct member
 * @owner: struct member
 * Return: NULL if the function fails
 */
dog_t *_new_dog(char *name, float age, char *owner)
{
	dog_t *doggo, new;
	size_t name_len, owner_len, i = 0;
	char nam[64] = {0};
	char ownr[64] = {0};

	name_len = _strlen(name);
	owner_len = _strlen(owner);
	while (i <= name_len)
	{
		nam[i] = '\0';
		i++;
	}

	i = 0;
	while (i <= owner_len)
	{
		ownr[i] = '\0';
		i++;
	}
	_strcpy(nam, name);
	_strcpy(ownr, owner);

	new.name = nam;
	new.owner = ownr;
	new.age = age;
	doggo = &new;
	return (doggo);
/* this is wrong as it returns a local variable. we should use malloc */
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
	dog_t *doggo = NULL;
	size_t i, owner_len, name_len;

	/* allocate memory for doggo */
	doggo = malloc(sizeof(dog_t));
	if (!doggo)
		return (NULL);
	/*copy doggo's name */
	name_len = _strlen(name);
	doggo->name = malloc(name_len + 1);
	if (!doggo->name || !name || !owner)
	{
		free(doggo);
		return (NULL);
	}
	i = 0;
	while (i <= name_len)
	{
		doggo->name[i] = '\0';
		i++;
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
	i = 0;
	while (i <= owner_len)
	{
		doggo->owner[i] = '\0';
		i++;
	}
	_strcpy(doggo->owner, owner);
	doggo->age = age; /* copy doggo's age */
	return (doggo);
}

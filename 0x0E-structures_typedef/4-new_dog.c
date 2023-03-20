#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	if (name != NULL)
		doggo->name = name;
	if (age)
		doggo->age = age;
	if (owner != NULL)
		doggo->owner = owner;
	return (doggo);
}

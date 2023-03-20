#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - definition
 * Description: a function that frees dogs.
 * @d: pointer to a dog
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}

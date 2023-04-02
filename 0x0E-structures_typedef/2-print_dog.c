#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - definition
 * Description: a function that prints a struct dog
 * If an element of d is NULL, print (nil) instead of this element.
 *  (if name is NULL, print Name: (nil))
 *  If d is NULL print nothing.
 * @d: pointer to a dog struct
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if ((d->age) <= 0.0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}

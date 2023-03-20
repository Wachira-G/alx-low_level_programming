#include "dog.h"

/**
 * init_dog - definition
 * Description: a function that initialize a variable of type struct dog
 * @d: pointer to a dog structure
 * @name: member of dog structure
 * @age: member of dog struct
 * @owner: member of dog struct
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

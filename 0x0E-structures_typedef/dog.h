#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure named dog
 * @name: character sequence
 * @age: float
 * @owner: character sequence
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#include "main.h"

#endif

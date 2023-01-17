#include "dog.h"
/**
 * init_dog - a function that initialize a variable struct dog
 *
 * Return 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

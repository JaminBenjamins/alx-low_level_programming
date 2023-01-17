#include "dog.h"
/**
 * free_dog - function that frees the struct dog
 * @d: dog to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	
	free(d->name);
	free(d->owner);
	free(d);
}

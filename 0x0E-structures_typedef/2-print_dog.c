#include "dog.h"
/**
 * print_dog - prints the struct to dog
 * @d: pointer to variable to print
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
	{
	printf(" ");
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
	}
}

#include <stdlib.h>
#include "main.h"
/**
 * create array - creates a string of charcters and initialize it
 * @size: the size of memory to print
 * @c: character to initialize
 *
 * Return: pointer to array NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ar;

	if (size == 0)
		return (NULL);
	
	ar = malloc(sizeof(*char) * size);
	
	if (ar = NULL)
		return(NULL);
	
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}


#include "main.h"

/**
 * _calloc - allocates mmeory to an array using malloc
 * @nmemb array to allocate memory for
 * @size: size of memory to allocate
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	
	s = malloc(nmemb * size);
	if (s != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			s[i] = 0;
		return (s);
	}
	else
	{
		return (NULL);
	}
}	

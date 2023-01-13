#include "main.h"
#define min(x, y) (((x) < (y)) ? (x) : (y))

/*
 * _realloc - reallocates memory to anew location
 * @ptr - address of memory to be moved
 * @aold_size: size of old memory
 * @new_size: size of new memory
 *
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *temp;
	
	if (ptr == NULL)
	{
		temp = malloc(new_size);
		return (temp);
	}
	else if (old_size == new_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp = malloc(new_size);
		if (temp != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)temp + i) = *((char *)ptr + i);
					free(ptr);
					return (temp);
		}
		else 
			return (NULL);
		
	}
}

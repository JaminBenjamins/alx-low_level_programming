#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return : pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *s;
	int i;

	s = malloc(sizeof(int *) * b);
	if (s == NULL)
		return (98);

	for (i = 0; i < b; i++)
		s[i] = b;
}

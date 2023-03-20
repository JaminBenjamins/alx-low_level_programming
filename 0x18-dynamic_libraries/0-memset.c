#include "main.h"

/**
 * _memset -repeats a sequence of characters 
 * @s: pointer to memory to repeat
 * @b: data for filling 
 * @n: length of array
 * Return - pointer to memory fill
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

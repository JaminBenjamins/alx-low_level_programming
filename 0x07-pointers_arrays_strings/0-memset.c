#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: sourcee string
 * @b: constant byte for filling
 * @n: length of buffer
 * Return -new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0;i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

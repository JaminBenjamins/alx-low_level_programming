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
	int i = 0;

	for (;i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

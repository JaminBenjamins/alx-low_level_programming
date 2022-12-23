#include "main.h"
/**
 * _strncat concatenate two strings but
 * uses a max number of bytes from src
 * and does not have to null terminate
 * @dest string to concatenate
 * @src string appending to @dest
 * Return concatenateed string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	dest_len = 0;	
	int i;
	
	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}

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
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n; && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';
	}
	return (dest);
}

#include "main.h"
/**
 * _strcat the function to concatenate two strings
 * @dest string where appending happens
 * @src string is appended to @dest
 * Return string 
 */
char *_strcat(char *dest, char *src)
{
	int c1, c2;

	while (dest[c1] != '\0')
		c1++;

	for (c2 = 0; src[c2] != '\0'; c2++)
	{
		dest = src; c1++; 
	}

	return (dest);
}

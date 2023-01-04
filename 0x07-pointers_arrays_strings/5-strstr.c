#include "main.h"
/**
 * _strstr locates a substring 
 * @haystack :string in which to check for needle 
 * @needle: substring to find in haystack
 *
 * Return: pointer to first occurence of string needle
 * */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a, b;

	while (haystack[a])
	{
		while (needle[b] && haystack[a])
		{
			if (haystack [a + b] == needle[b])
				b++;
			else
				break;
		}
		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
			return (haystack + a);
		}	
		return (0);
}


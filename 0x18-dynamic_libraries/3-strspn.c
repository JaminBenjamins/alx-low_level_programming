#include "main.h"
/**
 * _strspn gets length of a prefix substring
 * @s :string to check
 * @accept string to check against
 * Return number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;
	
	for (a = 0; s[a]; a++)
	{
		for (b = 0; s[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			break;
	}
	return (a);
}
		

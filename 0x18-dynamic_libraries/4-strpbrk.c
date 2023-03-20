#include "main.h"
/**
 * _strpbrk searches a string for any set of bytes
 * @s : string to be checked
 * @accept: string to be checked against
 *
 * Return: pointer to byte in s that match or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; s[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (accept[b])
			return (s + a);
	}
	return (0);
}

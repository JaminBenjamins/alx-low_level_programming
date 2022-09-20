#include "main.h"

/** Main : _strlen returns the length of a string
 * 
 * Return : Always 0
 */
int _strlen(char *s)
{
	int str = 0;
	while (*(s + str) != '\0')
		str++;

	return (str);
}

#include "main.h"

/**
 * Main : Function that prints half of the numbers in a string
 * 
 * Return : Always 0
 */
void puts_half(char *str);
{
	int len = 0; 

	while (*(str + len) != '\0')
	{
		if ( len % 2 == 0)
			_putchar(len);
		len++;
	}
}

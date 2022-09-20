#include "main.h"

/**
 * Main : Print a string of characters in reverse
 *
 * Return : Always 0
 */
void _puts(char *str)
{
	int len = 0; 

	while (*(str + len) != '\0')
		len++;
	
	putchar(*(str + len));
}

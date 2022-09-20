#include "main.h"

/**
 * puts-half - Prints half of a string 
 * 
 * @str - The string to print
 */
void puts_half(char *str)
{
	int len = 0; 
	int odd;

	for (len = 0; str[len]; str++)
	       ;	
	{
		if ( len % 2 == 1)
			odd = (len - 1) / 2;
			odd += 1;
	
		else
	
			odd = len / 2;
	}
	for (; odd < len; odd++)
	{
		_putchar(str[odd]);
	}
	_putchar('\n');
}

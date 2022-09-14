#include "main.h"
/**
 * Main : The function that executes
 * Description: Prints last number of a value
 * Return 0 always
 */

int print_last_digit(int n)
{
	int l = n % 10;

	if (n < 0)
	       n *=-1;
	_putchar( l + '0');
return (l);
}	
		

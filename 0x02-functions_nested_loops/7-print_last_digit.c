#include "main.h"
/**
 * Print_last_digit prints the last digit of a number
 * @n : The variable to be used
 * Return : The value of the last digit 
 */

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
	       n *= - 1;
	_putchar( l + '0');
	}
return (l);
}	
		

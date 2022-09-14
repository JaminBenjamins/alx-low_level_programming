#include "main.h"
/**
 * Main :Where function executes
 * Description : Findds a sign of a number
 * Return : 0 Always
 */
int print_sign (int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}	

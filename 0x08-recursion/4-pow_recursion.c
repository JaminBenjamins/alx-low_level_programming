#include "main.h"
/**
 * _pow_recursion - finds value of x raised to y
 * @x: the number
 * @y: the exponent
 *
 * Returns x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return(-1);
	if (y == 0)
		return(1);
	if(y == 1)
		return(x);
	return(x * _pow_recursion(x, y - 1));
}

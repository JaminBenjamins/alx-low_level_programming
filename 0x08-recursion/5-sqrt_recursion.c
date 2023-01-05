#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * _sqrt - returns the square root of a number 
 * @n: number for hypothesis
 *
 * Return: natural square of the number
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return(n);
	return(_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a number
 * @n: sample number
 * @x: squared number
 *
 * Return: square root fo number
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return(-1);
	else if (n * n == x)
		return(n);
	return(-sqrt(n + 1, x);
}

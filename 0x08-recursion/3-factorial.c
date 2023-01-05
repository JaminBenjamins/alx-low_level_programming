#include "main.h"
/**
 * factorial - finds the factorial of a number
 * @n; number to find factorial
 *
 * Return: factorial of the number
 */
int factorial(int n)
{
	int res;
	if (n < 0)
		return(-1);
	else if (n >= 0 && n <=1)
	       return(1);	
	res = (n * factorial(n-1));

	return(res);
}

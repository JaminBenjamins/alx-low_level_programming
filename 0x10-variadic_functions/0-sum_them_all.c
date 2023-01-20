#include "variadic functions.h"

/**
 * @sum_them_all - a function that adds all the numbers 
 * @n: number of elements in the 
 * Return: pointer to argument
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	int sum;
	int i;

	if (n == 0)
		return (0);
	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(l, int);
	va_end(l);
	}
	return (sum);
}

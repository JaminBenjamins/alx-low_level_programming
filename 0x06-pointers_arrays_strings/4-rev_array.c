#include "main.h"
/**
 * main a program that reverses an array of integers
 * @a an array of integers
 * @n number of elements
 * Return a string of integers
 */
void reverse_array(int *a, int n)
{
	int i; tmp;

	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[(n - 1) - i];
		a[(n - 1) - i] = a[i];
		a[i] = tmp;
	}
}

#include "main.h"

/**
 * Main : A function that prints a number of digits in an array
 * 
 * Return : A;ways 0
 */
void print_array(int *a, int n);
{
	int i; 

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d ", a[i]);
		else
			continue;
	}
	_putchar(i);
}

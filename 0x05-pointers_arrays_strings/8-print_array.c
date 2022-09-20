#include "main.h"
#include <stdio.h>

/**
 * print elements : print n elements of array
 * @a : array
 * @n : number of elementes 
 * 
 * Return : nothing
 */
void print_array(int *a, int n)
{
	int i; 

	for (i = 0; i < n; i++)
	{
			printf("%d ", a[i]);

	if (i != n - 1)
		printf(" , ");
	}

	printf("\n");	
}

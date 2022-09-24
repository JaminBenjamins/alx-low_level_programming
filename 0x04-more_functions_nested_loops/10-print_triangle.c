#include "main.h"
/**
 * Main : The function where evrything executes
 * Description : USe of characters to print  a sequence of characters
 * Return : Always 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = i; j < size; j++)
	{
		_putchar(' ');
	}

	for (j = 1; j <= i; j++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
	}
}



#include "main.h"

/**
 * Main : This is where everything is executed
 * description : A functions that swaps two files
 * Return : Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	
	int *a = *b;
	int *b = tmp;
}


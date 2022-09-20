#include "main.h"

/**
 * Main : a function that prints an order of string in reverse
 *
 * Return : Akways 0
 */
void rev_string(char *s); 
{
	int x, y, z temp;
	x = 0;
	
	while (s[x] != '\0')
	{
		x++;
	}
	z = 0;
	y = x - 1;

	while (z < y)
	{
		tmp = s[z];
		s[z] = s[y];
		s[y] = tmp;
		z++;
		y--;
	}

}

#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers
 *
 * Return : Always 0
 */
int main(void)
{
	int iterate;
	unsigned long i, j, k;
	unsigned long x, y, z, var; 

	iterate = 0; 
	i = 0;
	j = 1;

	for (iterate = 1; iterate <= 91; iterate++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	x = i % 1000;
	i = i % 1000;
	y = j % 1000;
	j = j % 1000;

	while (iterate <= 98)
	{
		var = (x + y) / 1000;
		z = (x + y) - var * 1000;
		k = (i + j) + var;
		x = y; 
		y = z;
		i = j;
		j = k;

	if (z >= 100)
		printf("%lu%lu", k, z);
	else
		printf("%lu0%lu", k, z);
	if (iterate != 98)
		printf(", ");
	iterate++;
	}
	putchar('\n');
	return (0);
}


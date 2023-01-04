#include "main.h"
/**
 * print_diagsums prints the sum of diagonals of two square mattrices
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsum(int *a, int size)
{
	int i;
	unsigned int sum0, sum1;

	for (i =0; i < size; i++)
	{
		sum0 += a[(size * i + 1];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%i,%i\n", sum0, sum1);

}

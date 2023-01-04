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
	int i, j, k, sum1, sum2;

	k = 0; sum1 = 0; sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			(i == j) ? sum1 += a[k] : 0;
			(i + j == size - 1) ? sum2 += a[k] : 0;
			k++;
		}
	printf("%i,%i\n", sum1, sum2);

}

#include <stdio.h>
/**
 * sum even fibonacci numbers under 4mil
 * 
 * Return : Always 0
 */
int main(void)
{
	unsigned long i, j, k, count, sum;

	i = 0;
	count = 0;
	j = 1;

	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;

		if ( k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
	}
	printf("%lu\n", sum);
	
	return (0);
}

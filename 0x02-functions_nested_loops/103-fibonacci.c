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

	for (sum = 0; sum < 50; sum++)
	{
		k = i + j;
		i = j;
		j = k;

		if ( k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
	printf("%lu", sum);
	}
	return (0);
}

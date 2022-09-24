#include <stdio.h>
/**
 * sum even fibonacci numbers under 4mil
 * 
 * Return : Always 0
 */
int main(void)
{
	unsigned long i, j, k, sum;

	i = 0;
	j = 1;

	for (sum = 0; sum < 4000000; sum++)
	{
		k = i + j;
		i = j;
		j = k;

		if (k % 2 == 0)
		{
			sum += k + ' ';
		}
	}
	printf("%lu\n", sum);
	
	return (0);
}

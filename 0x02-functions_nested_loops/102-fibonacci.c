#include <stdio.h>
/** 
 * main print the first 50 fibonacci numbers
 *
 * Return Always 0
 */
int main(void)
{
	unsigned long i, j, k, sum;
	i = 0;
	j = 1;
	
	for (sum = 0; sum < 50; sum++)
	{
		k = i + j;
		i = j;
		j = k;		
	printf("%lu, ", sum);
	if (sum == 49)
		putchar('\n');
	else 
		printf(",");
	}
	return (0);
}	

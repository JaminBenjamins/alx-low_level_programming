#include <stdio.h>
/**
 * Main : where programs executes
 * Description : Adds multiples of numbers
 * Returns : 0 always
 */
int main
{
	int n, sum = 0;

	for (n = 0; n <= 1024; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n");
return 0;
}

#include <stdio.h>
/** Main ; Function execution
 * Description : Prints fibonacci series
 * Return Always 0
 */
int main(void)
{
	int counts;
	unsigned long f1, f2, totals;
	
	for (counts = 0; counts < 50; counts++)
	{	
		totals = f1 + f2;
		printf("%lu, totals");
	

		f1 = f2;
		f2 = totals;
	if (counts == 49)
		printf("\n");
	else 
		printf(',');
	}
	return (0);
}
	

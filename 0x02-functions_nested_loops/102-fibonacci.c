#include <stdio.h>
/** Main ; Function execution
 * Description : Prints fibonacci series
 * Return Always 0
 */
int main(void)
{
	int sum = 0;int fb1 = 0;int fb2 = 1;int n = 0;

	while (n < 50)
	{
		fb1 = fb2;	
		fb2 = sum;

	printf("%d, ", sum);
	}
	return (0);
}	

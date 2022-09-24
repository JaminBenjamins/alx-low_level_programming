#include <stdio.h>
/**
 * Main : Function where everything executes
 * Description : Prints function with exception of %5 and %3
 * Return always 0
 */
int main(void)
{
	int n; 

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}		
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			printf(" ");	
		}
	}
	printf("\n");

	return (0);
}

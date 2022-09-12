#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** The header files import the necessary libraries
 * The middle section define the random variable generator
 * The st section prints the condition from the generated variable
 * */

int main (void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	l = n % 10;

	if (n > 5){
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (n == 0){
		printf("Lasr digit of %d is %d and is 0\n", n, l);
	}
	else {
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}

	return (0);
}
	
	

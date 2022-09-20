#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * This is a program that prints three random numbers using a function
 * The main function is where the project is written
 * The header files specify the libraries to be used in execution
 * The program utilizes the conditional if statement in execution
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0) 
		printf("%i is positive\n", n);
	
	else if (n < 0) 
		printf("%i is negative\n", n);
	
	else  
		printf("%i is zero\n", n);
	
	return (0);
}

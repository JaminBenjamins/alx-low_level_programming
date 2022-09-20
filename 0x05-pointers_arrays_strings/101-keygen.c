#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main : generates a random number
 *
 * Return : the generated password
 */
int main(void)
{
	int a;
	char b;

	srand(time(0));
	while (a <= 2645)
	{
		a = rand() % 128;
		a += b;
		putchar(b);
	}
	putchar(2772 - a);
	
	return (0);
}

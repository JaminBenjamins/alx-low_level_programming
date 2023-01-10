#include <stdio.h>
#include <stdlib.h>
/**
 * main: prints the multiplication of two numbers
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Return always zero
 */
int main(int argc, char *argv[])
{
	int i, j;
	
	if (argc == 3)
	{
	i = atoi(argv[1]);	
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	}
	return(0);
}

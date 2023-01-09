#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main: prints the sum of two positive numbers
 * @argc: count of argument
 * @argv: vector of argument 
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *str;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			str = argv[i];
		}
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] < 48 || str[j] > 57)
			{
				printf("Error\n");
				return(1);
			}
		}
	}
	for (i = 0; i < argc; i++)
	{
	sum += atoi(argv[i]);
	printf("%d\n", sum);
	}
	return(0);
}
	




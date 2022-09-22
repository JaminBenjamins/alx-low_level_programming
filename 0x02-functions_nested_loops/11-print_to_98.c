#include <stdio.h>

/**
 * pirnt all integers from input to 98
 * separated by a comma and space
 * @n the first value of the range
 */
void print_to_98(int n)
{
	if (n >=98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		printf("%d\n", n);
		}
		else
		{
			while (n < 98)
				printf("%d, ", n++);
			printf("%d\n", n);
		}
	}
}

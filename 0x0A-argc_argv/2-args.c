#include <stdio.h>
/**
 * main: prints every argument on a new line
 * @argc: count arguments
 * @argv: vector of arguments
 *
 * Return always zero
 */
int main(int argc, char *argv[])
{
	int c, count;

	if (argc > 0)
	{
		while (c < argc)
		{
			printf("%s\n",argv[count]);
			return(0);
		}
	}
}

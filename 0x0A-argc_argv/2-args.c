#include <stdio.h>
/**
 * main - prints every argument on a new line
 * @argc: count arguments
 * @argv: vector of arguments
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;	
		}
	}
	return (0);
}

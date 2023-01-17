#include <stdio.h>
/**
 * @main - prints the file it was compiled from
 *
 * Return: always zero
 */
int main()
{
	printf("%s\n", __FILE__);

	return (0);
}

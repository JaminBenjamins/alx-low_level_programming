#include <stdio.h>
/**
 * Main : This is where the function executes
 *Description : the program prints double digits from a range
 * Return 0
 * */
int main(void)
{
	int a, b;
	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; a <= 99; a++)
		{
			putchar (a / 10 + '0');
			putchar (a % 10 + '0');
			putchar (' ');
			putchar (b / 10 + '0');
			putchar (b % 10 + '0');

			if (a == 98 && b == 99)
			{
				putchar('\n');
			}
			{
			putchar(',');
			putchar(' ');
			}
			b++;
		}
		a++;
	}
	return (0);
}

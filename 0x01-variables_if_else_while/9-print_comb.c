#include <stdio.h>
/**
 * Main : This is where the function is executed 
 *
 * Description : The code is written to print a cmobination of 0 - 9
 *
 * Return : 0 as it executes
 */

int main(void)
{
	int a;
for (a = 48; a <=57; a++)
{
	putchar(a);
if (a != 57)

	{
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}

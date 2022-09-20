#include <stdio.h>
/**
 * main: the function 
 *
 * Description: This is where everything executes
 *
 * Return : 0 
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);

	putchar('\n');

	return (0);
}

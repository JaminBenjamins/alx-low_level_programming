#include <stdio.h>

/**
 * main - calls the function that executes the thing
 *
 * return : 0 when the function ends. 
 */

int main(void)
{
	char ch;

	{
	for (ch = 'a';ch <= 'z';ch++)
	{
	if (ch != 'e' && ch != 'q')
		putchar(ch);

	}
	}
	putchar ('\n');
	return (0);
}
	

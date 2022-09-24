#include "main.h"
#include <stdio.h>

/**
 * Main : The function where everything executes
 * Description : A function that prints a sequence of characters
 * Retrun ; The value is always 0
 */
void print_diagonal(int n)
{
	int line, dash;
	
	if (n > 0)
	{
		for ( line = 0; line < n; line++)
		{
			for (dash = 0; dash < line; dash++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (line == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');	
}
			

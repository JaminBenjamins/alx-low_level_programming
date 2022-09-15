#include "main.h"
/** 
 * Main : This is where the function executes
 * Description : Prints a line on the buffer
 * Return a value on the buffer
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	else 
		_putchar('\n');

	return (0);
}

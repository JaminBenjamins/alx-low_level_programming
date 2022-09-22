#include "main.h"
/** 
 * Main : This is where the function executes
 * Description : Prints a line on the buffer
 * Return a value on the buffer
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}

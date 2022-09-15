#include "main.h"
/**
 * Main : The function where evrything executes
 * Description : USe of characters to print  a sequence of characters
 * Return : Always 0
 */
void print_triangle(int size)
{
	int ch, space;

	if (size > 0)
	{
		for (ch = 1; ch <= size; ch++)
		{
			for (space = size - ch; space > 0; space--)
				_putchar(' ');
			
			for (space = 0; space < ch; space++)
				_putchar('#');
			if (ch == size)
				continue;
		}
		_putchar('\n');
	}
	_putchar('\n');
}

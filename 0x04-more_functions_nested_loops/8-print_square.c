#include "main.h"
/** 
 * Main ; The function where everything executes
 * Description : prints a square followed by a line
 * Return : The value is nothing
 */
void print_square(int size)
{
	int side, cide;

	if (size > 0)
	{
		for (cide = 0; cide < size; cide++)
		{
			for (side = 0; (side < size - 1); side++)
			_putchar('#');
		}

		_putchar('#');
		_putchar('\n');
	}
}

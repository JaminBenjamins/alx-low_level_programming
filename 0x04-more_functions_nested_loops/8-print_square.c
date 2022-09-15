#include "main.h"
/** 
 * Main ; The function where everything executes
 * Description : prints a square followed by a line
 * Return : The value is nothing
 */
void print_square(int size)
{
	int side, cide;

	for (side = 0; side < size; side++)
	{
		for ( cide = 0; cide < size; cide++)
			_putchar('#');

		if (side == size - 1)
			continue;
		_putchar('\n');
	}
}

#include "main.h"
/**
 * Main : Where function executes
 * Description : The function prints digits with exception
 * Return no value
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar((i % 10) + '0');
	}
	_putchar('\n');
}

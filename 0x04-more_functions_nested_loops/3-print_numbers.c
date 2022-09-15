#include "main.h"
/**
 * Main : The place where function executes
 * Description : Prints a set of numbers
 * Return no value
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 9; a++)
		_putchar((a % 10) + '0');

	_putchar('\n');
}

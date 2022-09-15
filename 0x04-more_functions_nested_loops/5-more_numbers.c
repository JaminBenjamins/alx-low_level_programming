#include "main.h"
/**
 * Main : Function where everything executes
 * Description : Prints set of digits iteratively
 * Return no value
 */
void print_most_numbers(void)
{
	int p, iterate;

	for (iterate = 0; iterate <=9; iterate++)
	{
		for (p =0; p <=14; p++)
		{
			if (p > 9)
				_putchar((p / 10 + '0');
			_putchar((p % 10 + '0');
		}
	}
}	

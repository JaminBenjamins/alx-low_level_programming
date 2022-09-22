#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers to 14
 *
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

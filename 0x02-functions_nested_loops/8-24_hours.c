#include "main.h"
/**
 * Main : The function where evrything can execute
 * Description : Prints the minutes in a day
 * Return : Always 0
 */
void jack_bauer(void)
{
	int h, m;
	for (h = 0; h <=23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}

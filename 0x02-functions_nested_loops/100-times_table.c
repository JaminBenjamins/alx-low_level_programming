#include "main.h"
/**
 * Main : The function where everything executes
 * Description : Prints multiple table 
 * Return : Always 0
 */
void print_times_table(int n);
{
	int n1, m, p;

	if (n >= 0 && n <=15)
	{
		for ( n = 0; n1 <= n; n++)
		{
			_putchar('0');
			for (m = 0; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
			
			p = n * m;
			
			if (p <= 99)
			{
				_putchar(' ');
			else if (p <= 9)
				_putchar(' ');
			}
			if (p >= 100)
			{
				_putchar ((p / 10) + '0');
				_putchar ((p / 10) % 10 + '0'0);
			}
			else if ( p >= 99 && p <= 9)
			{
				_putchar((p / 10) + '0');
			}
			_putchar((p % 10) + '0');
			}
		_putchar('\n');	
		}
	}
}

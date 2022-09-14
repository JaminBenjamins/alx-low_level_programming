#include "main.h"
/**
 * Main : The function where everything executes 
 * Description prints a table of x9
 * Return 0; Always
 */
void times_table(void)
{
	int n, m, p;

	for (n = 1; n <= 9; n++)
	{
		for  (m = 1; m <= 9; m++)
		{	
		 	_putchar(',');
			_putchar(' ');

			p = n * m;
			
			if (p <= 9)
				_putchar(' ');
			else 
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
		}
		_putchar('\n');
	}
}
				


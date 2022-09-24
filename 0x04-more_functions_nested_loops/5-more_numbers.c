#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers to 14
 *
 * Return no value
 */
void more_numbers(void)
{
	int p, iterate;

	for (iterate = 0; iterate < 10; iterate++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p > 9)
			{
				putchar((p / 10) + '0');
			}
			putchar((p % 10) + '0');
		}
		putchar(10);
	}
}

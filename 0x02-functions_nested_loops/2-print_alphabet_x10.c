#include "main.h"
/**
 * Main : This is where the function executes
 * Description : The function here is a prototype
 * Return : Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <='z'; ch++)
		       _putchar(ch);
	}
	_putchar('\n');
}	

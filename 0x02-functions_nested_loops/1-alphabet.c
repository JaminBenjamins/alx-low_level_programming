#include "main.h"
/**
 * Main : This is where the function executes
 * Description : Print alphabet lowcase
 * Return : Always 0
 */
void print_alphabet(void)
{
	char print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <='z'; print_alphabet++)
	{
		_putchar(print_alphabet);
	}
_putchar('\n');
}

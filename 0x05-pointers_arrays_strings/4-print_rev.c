#include "main.h"

/**
 * Main : Prints a string in reverse order
 *
 * Return : Always 0
 */
void print_rev(char *s)
{
	int len = strlen(*s);

	while (len --)
		_putchar(*s + len);

}

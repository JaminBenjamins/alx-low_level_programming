#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * Main : Prints a string in reverse order
 *
 * Return : Always 0
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len --)
		putchar(*s + len);

	putchar(10);
}

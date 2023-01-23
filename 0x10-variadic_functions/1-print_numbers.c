#include "variadic_functions.h"

/**
 * print_number - afunction that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 *
 * Return: pointer to printed numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(l, int));

	if (i != (n - 1) && separator == NULL)
		printf("%s\n", separator);
	}
	va_end(l);
}

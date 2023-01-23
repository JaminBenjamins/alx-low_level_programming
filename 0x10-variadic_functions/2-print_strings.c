#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings
 * @separator: string to be printed between strings
 * @n: number of string to be passed to the function
 *
 * Return: pointer to argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	char *s;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(l, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s\n", s);
	}
	if (i != (n - 1) && separator == NULL)
		printf("%s\n", separator);
	va_end(l);
}

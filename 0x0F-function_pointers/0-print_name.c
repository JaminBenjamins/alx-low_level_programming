#include "function_pointers"
/**
 * print_name - function that prints a name
 * @namae: name to print
 * @f: pointer to function name
 *
 * Return: void 
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
	return (f);
}

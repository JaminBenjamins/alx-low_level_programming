#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: the number of elements in the array
 * @cmp: pointer to the function to compare values
 *
 * Return: first element of the array otherwise -1 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
	return (i);
	}
	return (-1);
}

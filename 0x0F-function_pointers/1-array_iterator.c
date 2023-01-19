#include "function_pointers.h"

/**
 * array_iterator - repeas a typed array of integers
 * @size: the number of elements in the array
 * @action:  function that iterates
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}

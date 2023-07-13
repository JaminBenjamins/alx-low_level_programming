#include "search_algos.h"

/**
 * linear_search - search for a value in a sorted array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value searched -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
		array++;
	}
	return (-1);
}

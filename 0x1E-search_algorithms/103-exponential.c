#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array
 * of integers using binary search
 * @array: a pointer to first elementt of the array to search
 * @left: the starting index of the sub array to search
 * @right: the ending index of sub array of sub array to search
 * @value: value to search for
 *
 * Return: If value is not present or arry is NULL, -1
 * Otherwise index where value is located
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = lefy, i < right; i++)
			printf"%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;

	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using exponential search
 * @array: a pointer to the first element of array search
 * @size: size of array to search in
 * @value: the value to search for
 *
 * Return: If value is not in array,
 * Otherwise index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t  i = right;

	if (array == NULL)
			return (-1);

    if (array[0] != value)
	{
	    for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}

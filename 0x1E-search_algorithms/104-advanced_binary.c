#include "search_algos.h"

/**
 * advanced_binary - function that searches recursively for a value
 * in a sorted array of integers using binary search.
 * @array: ptr to the first element of the sub-array to search.
 * @left: starting index of subarray to search.
 * @right: last index of subarray to search
 * @value: value to search for
 *
 * Return: index where value is located or -1 otherwise
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - function that searches for a value in a sorted
 * array of integers using advanced binary search.
 * @array: pointer to the first element of array to search.
 * @size: no. of elements in array.
 * @value: value to search for
 *
 * Return: the first index where value is located or -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}

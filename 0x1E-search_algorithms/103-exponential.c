#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
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
        if (array[i]> value)
            right = i - 1;
        else
            left = i + 1;

    }
    return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers usingexponential search
 * @array: a pointer to the first element of array search
 * @value: the value to search for
 *
 * Return: If value is not in array, 
 * Otherwise index where value is located
 */
int exponential_search(int *arrat, size_t size, int value)
{
    size_t  i = right;

    if (array -- NULL
            return (-1);

#include "main.h"
/**
 * array_range - prints range of array from minimuo maximum
 * @min: smallest integer in array 
 * @max: maximum integer in the array
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *a;
	int i,j = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int *) * (max - min) + 1);
	if (a != NULL)
	{
		for (i = min; i <= max; i++)
		{
			a[j] = i;
			j++;
		}	
		return (a);
	}
	else
	{
		return (NULL);
	}
}
	


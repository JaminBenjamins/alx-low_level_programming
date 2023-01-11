#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that points to a 2D array of integers
 * @width: width of the array
 * @height: length of the array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int) * height);
	if (grid != NULL)
	{
		for (; i < height; i++)
		{
			grid[i] = (int *) malloc(sizeof(int) * width);
			if (grid != NULL)
			{
				for (; j < width; j++)
					grid[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(grid[i]);
					i--;
				}
				free(grid);
				return (NULL);
			}
		}
		return (grid);	
	}
	else
	{
		return (NULL);
	}
}	

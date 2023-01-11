#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that frees a 2D grid
 * @grid: memory grid to free
 * @height: size of the grid
 *
 * Return: returns void
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
		free(grid[f]);	
	
	free(grid);
}

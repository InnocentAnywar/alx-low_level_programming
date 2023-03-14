#include "main.h"
#include <stdlib>

/**
 * free_grid - frees two dimensional grids from p
 * @grid: Two dimensional array of int to br free
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

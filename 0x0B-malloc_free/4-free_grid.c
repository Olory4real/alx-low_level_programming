#include "main.h"
#include <stdlib.h>

/**
 * freee_grid -frees 2D grid created in alloc_grid.
 * @grid: pointer to pointer
 * @height: height of the grid.
 *
 * Return: void
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

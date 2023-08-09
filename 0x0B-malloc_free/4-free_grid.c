#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated for a 2D grid.
 * @grid: Grid to be freed.
 * @height: Height of the grid.
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

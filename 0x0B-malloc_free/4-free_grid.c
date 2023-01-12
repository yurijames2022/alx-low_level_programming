#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees grid memory
 * @grid: pointer of grid to be freed
 * @height: Height of grid
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

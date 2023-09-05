#include "main.h"

/**
 * free_grid - free the grid
 *
 * @grid: pointer to pointer
 *
 * @height: int
*/

void free_grid(int **grid, int height)
{
	int x = 0;

	for (; x < height; x++)
		free(grid[x]);
	free(grid);
}

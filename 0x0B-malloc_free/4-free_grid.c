#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory
 *
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int numbers;

	if (grid == NULL || height == NULL)
	{
		return;
	}
	for (numbers = 0; numbers < height; numbers++)
	{
		free(grid[numbers]);
	}

	free(grid);
}

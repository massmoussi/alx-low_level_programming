#include "main.h"

/**
 * free_grid - frees a 2D grid previous create by alloc_grid
 * @grid: pointer to the 2D grid to free
 * @height: the height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	free(grid);
}

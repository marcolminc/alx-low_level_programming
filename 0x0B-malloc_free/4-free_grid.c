#include "main.h"


/**
 * free_grid - frees a 2D array of integers, created by alloc_grid()
 * @grid: the pointer to the grid
 * @height: the height of the grid (number of rows)
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

#include "main.h"


/**
 * free_grid - frees memory allocated for a grid(matrix)
 * @grid: the 2-D array(grid)
 * @height: number of rows (arrays of the array)
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}

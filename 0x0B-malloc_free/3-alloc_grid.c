#include "main.h"


/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: widht of the array (cols)
 * @height: height of the array (rows)
 *
 * Return: pointer to 2D array, NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int i, j;

	res = NULL;
	if (width > 0 && height > 0)
	{
		res = malloc(height * sizeof(*res));
		if (res)
		{
			for (i = 0; i < height; i++)
			{
				res[i] = malloc(width * sizeof(**res));
				if (!res[i])
				{
					for (j = 0; j < i; j++)
						free(res[j]);
					free(res);
					return (NULL);
				}
				for (j = 0; j < width; j++)
					res[i][j] = 0;
			}
		}
	}
	return (res);
}

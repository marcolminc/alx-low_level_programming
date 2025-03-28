#include "main.h"


/**
 * array_range - creates an array of integers
 * @min: lower range member (inclusive)
 * @max: higher range member (inclusive)
 *
 * Return: pointer to the array of the range, NULL otherwise
 */
int *array_range(int min, int max)
{
	int *res, i, j;

	res = NULL, j = 0;
	if (min <= max)
	{
		res = malloc(((max - min) + 1) * sizeof(*res));
		if (res)
		{
			if (min < 0 && max < 0)
				for (i = max; i >= min; i--)
					res[j] = i;
			else
				for (i = min; i <= max; i++)
					res[j++] = i;
		}

	}
	return (res);
}

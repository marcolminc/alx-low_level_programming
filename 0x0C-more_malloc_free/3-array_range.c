#include "main.h"


/**
 * array_range - creates an array from a range
 * @min: minimum of the range(inclusive)
 * @max: maximum of the range(inclusive)
 *
 * Return: the array, NULL on failure
 */
int *array_range(int min, int max)
{
	int size, i, *ptr;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min++;
	return (ptr);
}

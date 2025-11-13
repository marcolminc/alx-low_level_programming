#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, -1 otherwise
 * - assumes the array is sorted in ascending order
 * - uses the square root of the size of the array as the jump step
 * - uses the sqrt() included in <math.h> (must be compiled with -lm)
 * - prints every element in the array being compared with value
 */
int jump_search(const int *array, size_t size, int value)
{
	size_t step, prev;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;

	do {
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
	} while (prev < size && array[MIN(step, size) - 1] < value);

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	while (prev < MIN(step, size))
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return ((int)prev);
		prev++;
	}

	return (-1);
}

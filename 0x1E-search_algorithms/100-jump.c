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
	size_t start, end, step, prev, step_size;

	if (array == NULL || size == 0)
		return (-1);

	step_size = sqrt(size);
	step = step_size;
	prev = 0;

	while (prev < size && array[MIN(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += step_size;

		if (prev >= size)
			break;
		printf("Value checked array[%lu] = [%d]\n", MIN(prev, size) - 1,
				array[MIN(prev, size) - 1]);
	}

	start = prev - step_size;
	end = prev;

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	while (start < MIN(end, size))
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return ((int)start);
		start++;
	}
	return (-1);
}

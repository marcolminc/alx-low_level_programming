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
	size_t prev, step, curr;

	if (!array || !size)
		return (-1);
	prev = curr = 0;
	step = (size_t)sqrt((double)size);

	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
	for (; prev <= MIN(curr, size - 1); prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return ((int)prev);
	}
	return (-1);
}

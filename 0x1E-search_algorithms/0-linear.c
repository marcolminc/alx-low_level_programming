#include "search_algos.h"


/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: given array to search in(pointer of the first element of the array)
 * @size: size of array
 * @value: value to search for
 *
 * Return: (int) first index where value is located, -1 otherwise
 * - prints every array value being compared by value being searched for
 */
int linear_search(int *array, size_t size, int value)
{
	int res;

	if (!array || !size)
		return (-1);
	for (res = 0; res < (int)size; res++)
	{
		printf("Value checked array[%d] = %d\n", res, array[res]);
		if (array[res] == value)
			return (res);
	}
	return (-1);
}

#include "search_algos.h"


/**
 * bin_print_array - prints an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 *
 * Return: nothing
 */
void bin_print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}


/**
 * advanced_binary_helper - recursive helper for advanced binary search
 * @array: pointer to the first element of the array
 * @left: starting index of the subarray
 * @right: ending index of the subarray
 * @value: value to search for
 *
 * Return: index of the first occurence of value, -1 otherwise
 */
int advanced_binary_helper(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);
	bin_print_array(array + left, right - left + 1);
	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return ((int)mid);
		return (advanced_binary_helper(array, left, mid, value));
	}

	if (array[mid] > value)
	{
		if (mid == 0)
			return (-1);
		return (advanced_binary_helper(array, left, mid, value));
	}

	return (advanced_binary_helper(array, mid + 1, right, value));
}


/**
 * advanced_binary - searches for a value in a sorted array using advanced
 * binary search, finding first occurence
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of the first occurence of value, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	return (advanced_binary_helper(array, 0, size - 1, value));
}

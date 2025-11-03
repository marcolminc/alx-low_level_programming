#include "search_algos.h"


/**
 * print_array -  prints elements of a sub-array
 * @array: given (whole) array
 * @lo: lower boundary
 * @hi: higher boundary
 *
 * Return: nothing
 */
void print_array(const int *array, const size_t lo, const size_t hi)
{
	size_t i;

	printf("searching in array: ");
	for (i = lo; i < hi; i++)
	{
		printf("%d", array[i]);
		if (i < hi - 1)
			printf(", ");
		else
			printf("\n");
	}
}


/**
 * helper - recursive helper for binary search
 * @array: given array to search value from
 * @lo: lower current search boundary
 * @hi: higher current search boundary
 * @value: value to search for in array
 *
 * Return: index of the first occurrence of value in array, -1 otherwise
 */
int helper(int *array, size_t lo, size_t hi, int value)
{
	size_t mid;

	print_array(array, lo, hi);

	mid = (lo + hi - 1) / 2;
	if (array[mid] == value)
		return ((int)mid);
	if (array[mid] < value)
		lo = mid + 1;
	else
		hi = mid;
	if (lo >= hi)
		return (-1);
	return (helper(array, lo, hi, value));
}


/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: sorted array of integers
 * @size: size of array
 * @value: value to search for in the array of integers
 *
 * Return: index where value is located, -1 otherwise
 * - prints the array being searched every time it changes:
 *  - at the beginning,
 *  - when searching a subarray
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	return (helper(array, 0, size, value));
}

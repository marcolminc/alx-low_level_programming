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

	printf("Searching in array: ");
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
 * bin_search - recursive helper for binary search
 * @array: given array to search value from
 * @lo: lower current search boundary
 * @hi: higher current search boundary
 * @value: value to search for in array
 *
 * Return: index of the first occurrence of value in array, -1 otherwise
 */
int bin_search(int *array, size_t lo, size_t hi, int value)
{
	size_t mid;

	if (array == NULL || lo > hi)
		return (-1);

	print_array(array, lo, hi + 1);

	mid = lo + (hi - lo) / 2;

	if (array[mid] == value)
		return ((int)mid);

	if (array[mid] > value)
		return (bin_search(array, lo, mid - 1, value));

	return (bin_search(array, mid + 1, hi, value));
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t b = 1, hi;

	if (!array || size == 0)
		return (-1);

	/* Special case for the first element */
	if (array[0] != value)
	{
		while (b < size && array[b] <= value)
		{
			printf("Value checked array[%lu] = [%d]\n", b, array[b]);
			b *= 2;
		}
	}

	hi = (b < size) ? b : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", b / 2, hi);

	return (bin_search(array, b / 2, hi, value));
}

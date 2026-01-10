#include "search_algos.h"


/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, -1 otherwise
 * Description:
 * - assume that the array will be sorted in ascending order
 * - to determine the probe position use:
 * size_t  pos = low + (((double)(high-low) / (array[high] - array[low])) * (va
 * lue - array[low]))
 * - every time you compare a value in the array to the value you are searching
 * for, you have to print this value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t hi, lo, p;

	if (array)
	{
		lo = 0, hi = size - 1;
		p = lo + (double)(hi - lo) / (array[hi] - array[lo]) * (value - array[lo]);
		do {
			if (p >= size)
			{
				printf("Value checked array[%lu] is out of range\n", p);
				return (-1);
			}
			printf("Value checked array[%lu] = [%d]\n", p, array[p]);
			if (array[p] == value)
				return ((int)p);
			if (array[p] < value)
				lo = p + 1;
			else
				hi = p - 1;
			p = lo + (double)(hi - lo) / (array[hi] - array[lo]) * (value - array[lo]);
		} while (lo <= hi);
	}
	return (-1);
}

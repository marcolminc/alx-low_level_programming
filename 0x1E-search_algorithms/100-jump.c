#include "search_algos.h"


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
	size_t a, b;

	a = 0;
	b = (size_t)sqrt((double)size);

	do {
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (b >= size || (int)b >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", a, b);
			for (; a <= b && a < size; a++)
			{
				printf("Value checked array[%lu] = [%d]\n", a, array[a]);
				if (array[a] == value)
					return ((int)a);
			}
			break;
		}
		a = b;
		b += (size_t)sqrt((double)size);

	} while (array[MIN(b, size) - 1] < value);
	return (-1);
}


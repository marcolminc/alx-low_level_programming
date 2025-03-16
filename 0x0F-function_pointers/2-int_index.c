#include "function_pointers.h"


/**
 * int_index - searches for an integer
 * @array: given array to search an integer from
 * @size: size of array
 * @cmp: comparison function to determine index of required element
 *
 * Return: index of the first match (cmp does not return 0 for which)
 * -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, idx;

	idx = -1;
	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
			{
				idx = i;
				break;
			}
		}
	}
	return (idx);
}

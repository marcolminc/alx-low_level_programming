#include "function_pointers.h"


/**
 * int_index - finds index of an element using a callback
 * @array: the array of elements
 * @size: size of the array
 * @cmp: the function to find index of desired element
 *
 * Return: the index if found, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}

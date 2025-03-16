#include "function_pointers.h"


/**
 * array_iterator - executes a function (callback) on each element of an array
 * @array: the array
 * @size: size of array
 * @action: the callback function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
		for (i = 0; i < size; i++)
			action(*(array + i));
}


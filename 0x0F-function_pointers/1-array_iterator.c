#include "function_pointers.h"


/**
 * array_iterator - executes a function on each element of an array
 * @array: the given array
 * @size: size of the array
 * @action: the (callback) function to perform on each element
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}

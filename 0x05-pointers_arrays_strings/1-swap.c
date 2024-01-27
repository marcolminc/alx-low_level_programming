#include "main.h"

/**
 * swap_int - swaps values of two variables.
 * @a: the first variable
 * @b: the second variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

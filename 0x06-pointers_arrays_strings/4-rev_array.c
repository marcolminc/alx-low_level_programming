#include "main.h"

/**
 * reverse_array - reverses element's positions
 * @a: array to reverse whose elements
 * @n: size of the given array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; j >= i; i++, j--)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}

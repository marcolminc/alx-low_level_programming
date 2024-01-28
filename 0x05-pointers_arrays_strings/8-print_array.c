#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: the array
 * @n: size of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d\n", *(a + i));
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by \n
 * @a: array of integers
 * @n: number of elements to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 0 || !a)
		return;
	for (i = 0; i < n - 1; i++)
		printf("%d, ", *(a + i));
	printf("%d\n", *(a + i));
}

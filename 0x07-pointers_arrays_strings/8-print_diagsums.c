#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: int pointer to the square 2D array (not good practice!)
 * @size: size of the 2D array
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	ssize_t sum_main, sum_minor;
	int i;

	sum_main = sum_minor = 0;
	for (i = 0; i <= size * size - 1; i += (size + 1))
		sum_main += a[i];
	for (i = size - 1; i <= size * size - size; i += size - 1)
		sum_minor += a[i];
	printf("%ld, %ld\n", sum_main, sum_minor);
}

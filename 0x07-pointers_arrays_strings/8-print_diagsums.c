#include "main.h"

/**
 * print_diagsums - prints sums of diagonals of square matrix
 * @a: the matrix
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	long sum1 ,sum2;
	
	sum1 = sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%ld, %ld\n", sum1, sum2);
}

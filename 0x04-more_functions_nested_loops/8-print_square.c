#include "main.h"

/**
 * print_sqare - prints a square of desired size
 * @size: number of chars that form the square
 *
 * Return: void
 */
 void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

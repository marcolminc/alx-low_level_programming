#include "main.h"


/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	i = size;
	while (i-- > 0)
	{
		j = size;
		while (j-- > 0)
			_putchar('#');
		_putchar('\n');
	}
}

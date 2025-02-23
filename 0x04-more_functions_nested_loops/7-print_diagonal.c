#include "main.h"


/**
 * print_diagonal - 'draws' a diagonal line on the terminal (stdout)
 * @n: size of diagonal line (number of '\' characters)
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	if (n == 0)
		_putchar('\n');
	else
		while (i++ < n)
		{
			j = 1;
			while (j++ < i)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
}

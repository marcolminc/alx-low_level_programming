#include "main.h"

/**
 * print_diagonal - prints a diagonal by using \ char
 * @n: number of times '\' should be printed, forming a diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				putchar('\\');
			else
				putchar(' ');
		}
		putchar('\n');
	}
}

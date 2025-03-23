
#include "main.h"
#include <unistd.h>


/**
 * print_chessboard - prints a chessboard
 * @a: the chessboard an 8 * 8 2D array
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}

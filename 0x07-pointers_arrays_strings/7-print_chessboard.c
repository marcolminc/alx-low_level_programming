#include "main.h"


/**
 * print_chessboard - prints the chessboard
 * @a: 8x8 array for the chessboar
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
			if (col < 7)
				_putchar(' ');
		}
		_putchar('\n');
	}
}

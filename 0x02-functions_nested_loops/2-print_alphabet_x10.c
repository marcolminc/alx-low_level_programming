#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase, followed by a new line
 * in 10 rows
 *
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j < 123; j++)
			_putchar(j);
		_putchar('\n');
	}
}

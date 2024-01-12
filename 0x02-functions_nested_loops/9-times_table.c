#include "main.h"

/**
 * times_table - prints the nine times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			if (p < 10)
			{
				if (j > 0)
					_putchar(' ');
				_putchar('0' + p);
			}
			else
			{
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}


#include "main.h"


/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i <= 9) ? '0' : ((i / 10) + '0'));
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j <= 9) ? '0' : ((j / 10) + '0'));
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}

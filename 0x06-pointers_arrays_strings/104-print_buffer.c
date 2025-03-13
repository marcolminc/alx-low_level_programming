#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a (char) buffer
 * @b: the buffer
 * @size: size of b
 *
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i, j, k, full, less;
	char *in;

	if (size <= 0)
		putchar('\n');
	full = size / 10, less = size % 10, j = 0;
	for (i = 0; i < size; i++)
	{
		j++;
		if (j % 10 == 1)
		{
			in = (b + i);
			printf("%08x: ", i);
		}
		printf("%02x", *(b + i));
		if (j % 2 == 0)
			putchar(' ');
		if (j % 10 == 0)
		{
			full--;
			for (k = 0; k < 10; k++)
			{
				if (*(in + k) < 0x20 || *(in + k) > 0x7e)
					putchar(' ');
				else
					putchar(*(in + k));
			}
			putchar('\n');
		}
	}
	if (full == 0)
	{
		for (k = 0; k < (10 - less) * 2 + (10 - less) / 2; k++)
			putchar(' ');
		for (k = 0; k < less; k++)
			if (*(in + k) < 0x20 || *(in + k) > 0x7e)
				putchar('.');
			else
				putchar(*(in + k));
	}
}

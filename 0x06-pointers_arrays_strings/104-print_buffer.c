#include "main.h"
#include <stdio.h>
#include <ctype.h>


/**
 * print_buffer - prints a buffer
 * @b: the buffer
 * @size: size of the bugger
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int offset, i;
	char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (offset = 0; offset < size; offset += 10)
	{
		printf("%08x: ", offset);
		for (i = 0; i < 10; i++)
		{
			if (i + offset < size)
				printf("%02x", b[offset + i]);
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}
		/* print the buffer ocntent in printable characters */
		for (i = 0; i < 10; i++)
		{
			if (i + offset < size)
			{
				c = b[offset + i];
				printf("%c", isprint(c) ? c : '.');
			}
		}
		printf("\n");
	}
}


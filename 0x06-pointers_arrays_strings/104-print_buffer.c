#include <ctype.h>
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
	int i, chunk_offset;
	char c;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (chunk_offset = 0; chunk_offset < size; chunk_offset += 10)
	{
		printf("%08x: ", chunk_offset);
		for (i = 0; i < 10; i++)
		{
			if (i + chunk_offset < size)
				printf("%02x", *(b + chunk_offset + i));
			else
				printf("  ");
			if (i % 2)
				putchar(' ');
		}
		for (i = 0; i < 10; i++)
			if (chunk_offset + i < size)
			{
				c = *(b + chunk_offset + i);
				putchar((isprint(c)) ? c : '.');
			}
		putchar('\n');
	}
}

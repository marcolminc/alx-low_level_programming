#include <stdio.h>

/**
 * main - prints unique pairs of 2-digit combinations of base 10 digits
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar('0' + ((i >= 10) ? (i / 10) : 0));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + ((j >= 10) ? (j / 10) : 0));
			putchar('0' + (j % 10));
			if (i <98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

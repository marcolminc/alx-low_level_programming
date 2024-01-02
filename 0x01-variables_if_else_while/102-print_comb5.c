#include <stdio.h>

/**
 * main - prints unique pairs of 2-digit combinations of base 10 digits
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(i);
			putchar(' ');
			putchar(i);
			putchar(j);
			if (i < 58 && j < 58)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

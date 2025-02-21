#include<stdio.h>


/**
 * main - entry point
 *
 * Return: 0 -> success
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar((i <= 9) ? '0' : (i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j <= 9) ? '0' : (j / 10) + '0');
			putchar((j % 10) + '0');

			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

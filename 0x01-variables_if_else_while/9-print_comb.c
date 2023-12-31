#include <stdio.h>

/**
 * main - prints all possible combinations of signle-digits numbers of base 10.
 *
 * Return: Always 0(success).
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if(i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

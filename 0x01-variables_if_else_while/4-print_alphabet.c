#include <stdio.h>

/**
 * main - prints the alphabet, with condition to skip some 
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}

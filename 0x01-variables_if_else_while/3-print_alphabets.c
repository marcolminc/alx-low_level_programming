#include <stdio.h>

/**
 * main - prints alphabets, both lower- and upper-case, merged on a line
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

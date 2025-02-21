#include<stdio.h>


/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		if (i == 'e' || i == 'q')
			continue;
		else
			putchar(i);
	putchar('\n');

	return (0);
}

#include "main.h"


void print_num(int);

/**
 * more_numbers - prints 10 times the numbers, 0 -14, followed by a new line
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
			print_num(j);
		_putchar('\n');
	}
}


/**
 * print_num - prints a number to stdout
 * @n: the number to print
 *
 * Return: nothing
 */
void print_num(int n)
{
	if (n > 9)
		print_num(n / 10);
	_putchar('0' + (n % 10));
}

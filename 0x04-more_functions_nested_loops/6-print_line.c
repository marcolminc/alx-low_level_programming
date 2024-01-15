#include "main.h"

/**
 * print_line - prints a line by n times '_' char
 * @n: number of times '_' should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}	

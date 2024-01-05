#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: the number whose sign is to be printed
 *
 * Return: 1 and prints '+' for n > 0,
 * 0 and prints '0' for n == 0,
 * -1 and prints - for n < 0.
 */
int print_sign(int n)
{
	if (n < 0)
		_putchar('+'), return (1);
	else if (n == 0)
		_putchar('0' + 0), return (0);
	_putchar('-'), return (-1);
}

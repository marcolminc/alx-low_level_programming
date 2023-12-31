#include "main.h"

/**
 * print_last_digit - prints last digit of a given number.
 * @n: the given number whose last digit should be printed.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int d;

	n = (n < 0)? n * -1 : n;
	d = n % 10;
	_putchar(d + '0');
	return (d);
}

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

	d = n % 10;
	d = (d > 0) ? d : d * -1;
	_putchar(d + '0');
	return (d);
}

#include "main.h"


/**
 * print_last_digit - prints the last digit of a number
 * @n: the given number
 *
 * Return: the value of the last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = ((n < 0) ? n * -1 : n) % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}

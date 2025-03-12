#include "main.h"


/**
 * print_number - prints an integer
 * @n: the number to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	__int128_t num;

	num = n;
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num >= 10)
		print_number(num / 10);
	_putchar('0' + (num % 10));
}


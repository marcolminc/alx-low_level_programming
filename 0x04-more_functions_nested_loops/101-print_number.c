#include "main.h"
#include <unistd.h>


/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	__int128_t i;

	i = n;
	if (i < 0)
	{
		_putchar('-');
		i *= -1;
	}
	if (i > 9)
		print_number(i / 10);
	_putchar('0' + (i % 10));
}

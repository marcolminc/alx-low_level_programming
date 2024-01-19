#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int pow_10, temp_num;

	pow_10 = 1;
	if (n < 0)
		_putchar('-'), n *= -1;
	temp_num = n;
	while (temp_num > 9)
		pow_10 *= 10, temp_num /= 10;
	while (pow_10 > 1)
	{
		_putchar('0' + (n / pow_10));
		n %= pow_10, pow_10 /= 10;
	}
	_putchar('0' + (n % 10));
}

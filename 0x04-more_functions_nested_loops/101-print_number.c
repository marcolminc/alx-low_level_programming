#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int pow_10;
	unsigned int temp_num;

	pow_10 = 1;
	if (n < 0)
		_putchar('-'), temp_num = -n;
	else
		temp_num = n;
	while (temp_num / pow_10 > 9)
		pow_10 *= 10;
	while (pow_10 > 0)
	{
		_putchar('0' + (temp_num / pow_10));
		temp_num %= pow_10, pow_10 /= 10;
	}
}

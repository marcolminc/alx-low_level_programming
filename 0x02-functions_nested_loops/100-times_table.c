#include "main.h"

/**
 * pow_10 - computes powers of 10
 * @n: the exponent to compute power of 10 to
 *
 * Return: powers of 10
 */
int pow_10(int n)
{
	int r;

	r = 1;
	if (n == 0)
		return (r);
	else if (n == 1)
		return (10);
	for (; n > 1; n--)
		r *= 10;
	return (r);
}

/**
 * print_num - prints the supplied number
 * @n: the numbe to be printed
 *
 * Return: void
 */
void print_num(int n)
{
	int temp, size;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	size = 0, temp = n;
	while (temp > 10)
	{
		size++;
		temp /= 10;
	}
	for (; size > 1; size--)
	{
		_putchar('0' + (n / pow_10(size)));
		n %= pow_10(size);
	}
	_putchar('0' + (n % 10));
}

/**
 * print_times_table - prints n times table
 * @n: number to print times tabl of
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, p;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = i * j;
			if (p < 10)
			{
				if (j > 0)
					_putchar(' ');
				print_num(p);
			}
			else
				print_num(p);
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}


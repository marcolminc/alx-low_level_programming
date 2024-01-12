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
 * num_digits - computes number of digits a number has
 * @num: the number whose number of digits is computed
 *
 * Return: the number of digits
 */
int num_digits(int num)
{
	int count;

	count = 0;
	do {
		count++;
		num /= 10;
	} while (num > 0);
	return (count);
}

/**
 * spacer - prints spaces to make sure product values of a times table
 * are in square.
 * @size: the number of digits of the largest product
 * @current: the number of digits of the current product
 *
 * Return: void
 */
void spacer(int size, int current)
{
	while (current < size)
	{
		_putchar(' ');
		current++;
	}
	_putchar(' ');
}

/**
 * print_times_table - prints times table of number (n), provided it
 * is greater than 0 and less or equal to 15.
 * @n: the number to print times table of.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, size;

	if (n < 0 || n > 15)
		return;
	size = n * n;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			print_num(i * j);
			if (j < n)
			{
				_putchar(',');
				spacer(num_digits(size), num_digits(i * j));
			}
		}
		_putchar('\n');
	}
}

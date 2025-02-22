#include "main.h"
#include <stdio.h>

/**
 * pad - pads a number with spaces to fit width of 3
 * @n: number to pad
 *
 * Return: nothing
 */
void pad(int n)
{
	int pads;

	pads = 0;
	if (n <= 9)
		pads += 2;
	else if (n <= 99)
		pads += 1;
	while (pads--)
		_putchar(' ');
}

/**
 * pow_10 - raises 10 to power n
 * @n: the exponent to raise 10 to
 *
 * Return: 10 raised to power n
 */
int pow_10(int n)
{
	int val;

	val = 1;
	while (n > 0)
		val *= 10, n--;
	return (val);
}

/**
 * print_num - prints a whole number to stdout
 * @n: the number to print
 *
 * Return: nothing
 */
void print_num(int n)
{
	int place_value, place_count, temp;

	temp = n, place_count = 0;
	while (temp > 9)
		place_count++, temp /= 10;
	place_value = pow_10(place_count);
	while (place_value >= 1)
	{
		_putchar('0' + (n / place_value));
		n %= place_value, place_value /= 10;
	}
}


/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number to write times table of
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j > 0)
				pad(i * j);
			print_num(i * j);
			if (j < n)
				_putchar(','), _putchar(' ');
		}
		_putchar('\n');
	}
}

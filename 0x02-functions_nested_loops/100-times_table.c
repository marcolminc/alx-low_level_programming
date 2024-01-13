#include "main.h"

/**
 * num_digits - return the number of digits an integer has
 * @num: the integer whose number of digits is required
 *
 * Return: the number of digits
 */
int num_digits(int num)
{
	int count;

	count = 0;
	do
	{
		count++;
		num /= 10;
	} while	(num > 0);
	return (count);
}

/**
 * spacer - prints whitespaces according to largest number of digits 
 * to square the times table
 * @size: number of digits of the largest number
 * @current: number of digits of the current number being printed
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
 * print_num - prints a positive integer, one digit at a time from left
 * @num: the positive integer to be printed
 *
 * Return: void
 */
void print_num(int num)
{
	int pow_10, temp_num;

	pow_10 = 1, temp_num = num;
	while (temp_num >= 10)
		pow_10 *= 10, temp_num /= 10;
	while (pow_10 > 1)
	{
		_putchar('0' + (num / pow_10));
		num %= 10, pow_10 /= 10;
	}
	_putchar('0' + (num % 10));
}

/**
 * print_times_table - prints times table of number n
 * @n: the number to print times table of
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, size;

	if (n < 0  || n > 15)
		return;
	size = n * n;
	for (i = 0; i <= n; i++ )
	{
		for (j = 0; j <= n; j++)
		{
			print_num(i*j);
			if (j < n)
			{
				_putchar(',');
				spacer(num_digits(size), num_digits(i*j));
			}
		}
		_putchar('\n');
	}
}

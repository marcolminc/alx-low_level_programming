#include "main.h"


/**
 * print_most_numbers - prints the numbers, 0 - , except 2 and 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		if (i != '2' && i != '4')
			_putchar(i);
	_putchar('\n');
}

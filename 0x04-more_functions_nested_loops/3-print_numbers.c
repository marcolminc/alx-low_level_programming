#include "main.h"


/**
 * print_numbers - prints the numbers, 0 - 9, followed by a new line
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}

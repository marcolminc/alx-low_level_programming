#include "main.h"


/**
 * print_line - 'draws' a straight line in the terminal (stdout)
 * @n: size of line (number of '_' characters)
 *
 * Return: nothing
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}

#include "main.h"


/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (!s || *s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

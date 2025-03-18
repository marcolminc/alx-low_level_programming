#include "main.h"


/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (!s || *s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}

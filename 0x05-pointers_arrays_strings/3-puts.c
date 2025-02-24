#include "main.h"



/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: the string to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (str && *str++ != '\0')
		_putchar(*str);
	_putchar('\n');
}

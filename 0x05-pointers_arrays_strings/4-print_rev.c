#include "main.h"


/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s && *s != '\0')
		len++, s++;
	if (!len)
		goto endl;
	while (len-- >= 0)
		_putchar(*s--);
endl:	_putchar('\n');
}

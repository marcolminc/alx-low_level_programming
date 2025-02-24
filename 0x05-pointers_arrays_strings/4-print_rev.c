#include "main.h"


/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s && *s != '\0')
		len++, s++;
	return (len);
}
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s) - 1;
	while (len >= 0)
		_putchar(*(s + len--));
	_putchar('\n');
}

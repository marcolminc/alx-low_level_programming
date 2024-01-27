#include "main.h"


/**
 * str_len - counts characters in a string
 * @s: the string
 * Return: the number of characters
 */
int str_len(char *s)
{
	int len;

	len = 0;
	while (*s++ != '\0')
		len++;
	return (len);
}

/**
 * print_rev - print a string in reverse, followed by \n
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = str_len(s);
	while (len >= 0)
		_putchar(*(s + len--));
	_putchar('\n');
}

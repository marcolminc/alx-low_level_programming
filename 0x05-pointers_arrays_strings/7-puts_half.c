#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++ != '\0')
		len++;
	return (len);
}
/**
 * puts_half - prints second half of a string, followed by a new line
 * @str: the string to printt half of
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len, n;

	len = _strlen(str), n = 0;
	n = (len % 2 != 0) ? (((len - 1) / 2) + 1) : (len / 2);
	while (n < len)
		_putchar(*(str + n++));
	_putchar('\n');
}


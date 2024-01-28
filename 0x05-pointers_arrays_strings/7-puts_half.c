#include "main.h"


/**
 * _strlen - computes the length of a string
 * @s: the string whose length is required
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s++ != '\0' && *s != EOF)
	counter++;
	return (counter);
}

/**
 * puts_half - prints second half of a string
 * @str: the string provided
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, n;

	len = (int)_strlen(str);
	if (len % 2 != 0)
		n = (len - 1) / 2;
	n = len / 2;
	for (; n < len; n++)
		_putchar(*(str + n));
	_putchar('\n');
}

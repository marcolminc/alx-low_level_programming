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
	while (*s++ != '\0')
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
	unsigned int len, i, n;

	len = (unsigned int)_strlen(str);
	if (len % 2 == 0)
		for (i = len / 2; i < len; i++)
			_putchar(*(str + i));
	else
	{
		n = (len - 1) / 2;
		for (i = len - n; i < len; i++)
			_putchar(*(str + i));
	}
	_putchar('\n');
}

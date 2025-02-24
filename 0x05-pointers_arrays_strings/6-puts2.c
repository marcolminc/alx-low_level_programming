#include "main.h"


/**
 * puts2 - prints every other character, starting with the firsst
 * followed by a new line
 * @str: the string to print in this style
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str && *(str + i) != '\0')
	{
		if (i == 0 || i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

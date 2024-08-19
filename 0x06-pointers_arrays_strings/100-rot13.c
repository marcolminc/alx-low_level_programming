#include "main.h"

/**
 * rot13 - prints a string encoded in rot13
 * @str: the string to process
 * Return: pointer to ciphered string.
 */
char *rot13(char *str)
{
	char c, base;
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			base = 'A' + ((c >= 'a') * ('a' - 'A'));
			c = (c - base + 13) % 26 + base;
			*(str + i) = c;
		}
		i++;
	}
	return (str);
}

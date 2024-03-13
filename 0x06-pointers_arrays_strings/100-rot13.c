#include "main.h"

/**
 * rot13 - prints a string encoded in rot13
 * @str: the string to process
 * Return: number of chars printed
 */
int rot13(char *str)
{
	int i, numchar;
	char c;

	numchar = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			c = ((c - 'a') + 13) % 26 + 'a';
		else if (c >= 'A' && c <= 'Z')
			c = ((c - 'A') + 13) % 26 + 'A';
		numchar += _putchar(c);
	}
	return (numchar);
}

#include "main.h"

/**
 * rot13 - prints a string encoded in rot13
 * @str: the string to process
 * Return: pointer to ciphered string.
 */
char *rot13(char *str)
{
	char c;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			c = ((c - 'a') + 13) % 26 + 'a';
			str[i] = c;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c = ((c - 'A') + 13) % 26 + 'A';
			str[i] = c;
		}
	}
	return (str);
}

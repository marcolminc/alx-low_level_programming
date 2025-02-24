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
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int len, i, j;
	char temp;

	len = _strlen(s);
	for (i = 0, j = len - 1; j >= i; i++, j--)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}
}

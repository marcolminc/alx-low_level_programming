#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: the string to verse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len;
	char temp;

	len = 0;
	for (i = 0; *(s + i) != '\0'; i++)
		len++;
	for (i = 0, j = len - 1; j >= i; i++, j--)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}
}

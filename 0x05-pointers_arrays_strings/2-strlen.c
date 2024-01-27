#include "main.h"


/**
 * _strlen -  computes the length of a string
 * @s: provided string
 *
 * Return: number of characters in the string, s.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s++) != '\0' && *s != EOF)
		len++;
	return (len);
}

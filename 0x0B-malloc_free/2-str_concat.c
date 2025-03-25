#include "main.h"


/**
 * _strlen - computes size of a string
 * @s: the string to measure
 *
 * Return: length of s (in bytes)
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	for (; s && s[len]; len++)
		;
	return (len);
}


/**
 * str_concat - concatenates two strings into a buffer
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the buffer containing concatenated s1 and s2
 * NULL, otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int size, i;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	size = _strlen(s1) + _strlen(s2) + 1;
	dest = malloc(size * sizeof(*dest));
	if (dest)
	{
		for (i = 0; s1[i]; i++)
			dest[i] = s1[i];
		while (*s2)
			dest[i++] = *s2++;
	}
	return (dest);
}

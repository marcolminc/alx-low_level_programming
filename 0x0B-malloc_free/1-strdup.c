#include "main.h"


/**
 * _strlen - measures size of a string
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
 * _strdup - duplicates a string to another memory location
 * @str: the string to duplicate
 *
 * Return: pointer to a duplicate of str
 */
char *_strdup(char *str)
{
	char *dest;
	int size, i;

	dest = NULL;
	if (str)
	{
		size = _strlen(str);
		if (!size)
		{
			dest = malloc(1 * sizeof(*dest));
			if (dest)
				*dest = '\0';
			return (dest);
		}
		dest = malloc((size + 1) * sizeof(*dest));
		if (dest)
		{
			for (i = 0; i < size; i++)
				*(dest + i) = *(str + i);
			*(dest + i) = '\0';
		}

	}
	return (dest);
}

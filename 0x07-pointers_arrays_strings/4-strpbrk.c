#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the source string
 * @accept: the bytes to lookout for in s
 * Return: pointer to a matching byte, NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s == *(accept + i))
				return (s);
		s++;
	}
	return (NULL);
}

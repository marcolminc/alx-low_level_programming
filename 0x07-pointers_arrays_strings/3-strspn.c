#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the substring
 * Return: number of first bytes containing the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, found;
	size_t size;

	size = found = 0;
	while (*s != '\0')
	{
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s == *(accept + i))
				size++, found++;
		if (!found)
			return (size);
		found--;
		s++;
	}
	return ((unsigned int) size);
}

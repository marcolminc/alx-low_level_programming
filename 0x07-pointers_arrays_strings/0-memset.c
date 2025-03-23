#include "main.h"


/**
 * _memset - fills first n bytes of buffer by a constant byte
 * @s: the buffer
 * @b: the byte to fill s with
 * @n: size of s to fill (in bytes)
 *
 * Return: (filled) s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s && i < n; i++)
		*(s + i) = b;
	return (s);
}

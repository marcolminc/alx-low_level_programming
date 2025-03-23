#include "main.h"


/**
 * _memset - fills a buffer with a constant byte
 * @s: the buffer
 * @b: the byte to fill bytes of s with
 * @n: size of s to fill (in bytes)
 *
 * Return: s (with first n bytes filled with b)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}

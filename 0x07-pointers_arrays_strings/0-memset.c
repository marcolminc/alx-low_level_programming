#include "main.h"

/**
 * _memset - fils memory with a constant byte
 * @s: the memory
 * @b: the byte
 * @n: number of bytes of memory to fill with the byte
 * Return: the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
		*(s + i) = b, i++;
	return (s);
}

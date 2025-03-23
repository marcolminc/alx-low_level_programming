#include "main.h"


/**
 * _memcpy - copies memory area
 * @dest: destination area
 * @src: source area
 * @n: size to copy (in bytes)
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src && dest && i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

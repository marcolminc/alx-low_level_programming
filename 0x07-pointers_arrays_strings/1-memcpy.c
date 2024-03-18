#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to copy from src to dest
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
		*(dest + i) = *(src + i), i++;
	return (dest);
}

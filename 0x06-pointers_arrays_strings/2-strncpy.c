#include "main.h"


/**
 * _strncpy - copies a string
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	if (!dest || !src)
		return (dest);
	while (i < n && *(src + i) != '\0')
		if (*(dest + i) != '\0')
			*(dest + i) = *(src + i), i++;
		else
			break;
	while (i < n && *(dest + i) != '\0')
		*(dest + i++) = '\0';
	return (dest);
}

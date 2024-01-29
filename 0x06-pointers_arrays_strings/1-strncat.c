#include "main.h"


/**
 * _strncat - concatenates n characters of a string onto another
 * @dest: the destination string
 * @src: the source string
 * @n: number of chars to concatenate
 *
 * Return: pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && j < n)
		*(dest + i) = *(src + j), j++, i++;
	return (dest);
}

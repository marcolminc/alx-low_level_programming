#include "main.h"

/**
 * _strncpy - copies n chars from src string to dest string
 * @src: the source string
 * @dest: the destination string
 * @n: number of chars to be copied
 *
 * Return: pointer to destionation string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
		*(dest + i) = *(src + i), i++;
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}

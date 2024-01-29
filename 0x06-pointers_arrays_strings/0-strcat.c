#include "main.h"


/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: string to concatenate to destination string
 *
 * Return: ponter to destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
		*(dest + i) = *(src + j), j++, i++;
	return (dest);
}

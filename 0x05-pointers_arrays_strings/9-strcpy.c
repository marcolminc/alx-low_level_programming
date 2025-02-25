#include "main.h"


/**
 * _strcpy - copies a string from src buffer to dest buffer
 * @src: source buffer
 * @dest: destination buffer
 *
 * Return: destination buffer pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (!src || !dest)
		return ((!src) ? src : dest);
	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}

#include "main.h"


/**
 * _strcpy - copies a string from one variable to another
 * including the terminating character
 * @dest: pointer to memory of destination variable
 * @src: pointer to memory of source variable
 *
 * Return: ponter to destination variable's address
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
		*(dest + i) = *(src + i), i++;
	*(dest + i) = '\0';
	return (dest);
}

#include "main.h"


/**
 * _strcat - concatenates two strings
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *res;

	res = 0;
	if (!dest || !src)
		return (res);
	res = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (res);
}

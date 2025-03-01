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
	char *res;

	res = 0;
	if (!dest || !src)
		return (res);
	res = dest;
	while (n-- > 0 && *src != '\0')
		if (*dest != '\0')
			*dest = *src++;
		else
			break;
	if (n > 0 && *dest != '\0')
		*dest = '\0';
	return (res);
}

#include "main.h"


/**
 * _strncat - appends (copy of) n bytes from src to dest buffer
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *res;

	res = 0;
	if (!src || !dest)
		return (res);
	res = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n--)
		*dest++ = *src++;
	return (res);
}

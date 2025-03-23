#include "main.h"


/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to locate in s
 *
 * Return: pointer to c in s when found, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *res;

	res = NULL;
	for (i = 0; s && *(s + i); i++)
		if (*(s + i) == c)
		{
			res = (s + i);
			break;
		}
	return (res);
}

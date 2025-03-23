#include "main.h"
#include <unistd.h>


/**
 * _strchr_helper - recursively finds c in s
 * @s: given string
 * @c: character to find
 *
 * Return: pointer to location of c in s
 */
char *_strchr_helper (char *s, char c)
{
	if (*s == c)
		return (s);
	if (!*s)
		return (NULL);
	return (_strchr_helper(++s, c));
}


/**
 * _strchr - finds a character in a string
 * @s: the given string
 * @c: character to find in s
 *
 * Return: location of c in s, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	return (_strchr_helper (s, c));
}


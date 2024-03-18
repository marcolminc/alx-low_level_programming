#include "main.h"

/**
 * _strchr_helper - finds position of char c in string s
 * @s: the string
 * @c: the char
 * Return: pointer to first occurence of c
 */
char *_strchr_helper(char *s, char c)
{
	if (*s == c)
		return (s);
	else if (*s == '\0')
		return (NULL);
	return (_strchr_helper(++s, c));
}


/**
 * _strchr - finds position of char c in string s
 * @s: the string
 * @c: the char
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	return (_strchr_helper(s, c));
}

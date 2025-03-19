#include "main.h"


/**
 * _strlen - finds length of a string
 * @s: the string to measure
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	if (!s || *s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _is_palindrome_helper - recursively determine palindrome string
 * @s: the string to check
 * @lidx: left index of str (from beginning)
 * @ridx: right index of str (from the end)
 *
 * Return: 1 - > is palindrome, 0 otherwise
 */
int _is_palindrome_helper(char *s, int lidx, int ridx)
{
	if (s[lidx] != s[ridx])
		return (0);
	if (lidx >= ridx)
		return (1);
	return (_is_palindrome_helper(s, lidx + 1, ridx - 1));
}

/**
 * is_palindrome - checks whether a string is a palindrome
 * @s: string to check
 *
 * Return: 1 -> s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (!s || *s == '\0')
		return (1);
	return (_is_palindrome_helper(s, 0, _strlen(s) - 1));
}

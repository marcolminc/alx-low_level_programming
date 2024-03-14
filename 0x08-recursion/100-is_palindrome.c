#include "main.h"
/**
 * _strlen_recursion - computes length of a string, recursively
 * @s: the string
 * Return: lengthof the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));     
}

/**
 * is_palindrome_recursive - checks whether a string is palindrome
 * @s: the input string
 * @start: left iterator
 * @end: right iterator
 * Return: 1 for pallindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (*(s + start) != *(s + end))
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks whether a string is palindrome
 * @s: the input string
 * Return: 1 for palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (is_palindrome_recursive(s, 0, _strlen_recursion(s) - 1));
}

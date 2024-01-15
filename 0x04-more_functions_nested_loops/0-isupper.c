#include "main.h"


/**
 * _isupper - checks for uppercase character
 * @c: the ASCII value of the character to be checked
 *
 * Return: 1 if c is upper, 0 utherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}


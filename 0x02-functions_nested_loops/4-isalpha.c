#include "main.h"


/**
 * _isalpha - checks for alphabetic character
 * @c: given character to check
 *
 * Return: 1 -> c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

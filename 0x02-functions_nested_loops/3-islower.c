#include "main.h"

/**
 * _islower - checks whether a char is lowercase.
 *
 * @c: the char to be checked (in ASCII integer value).
 *
 * Return: 1 for lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

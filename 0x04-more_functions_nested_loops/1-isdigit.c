#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the ASCII input to check whether digit
 *
 * Return: 1 for digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (48 >= c && c <= 57)
		return (1);
	return (0);
}

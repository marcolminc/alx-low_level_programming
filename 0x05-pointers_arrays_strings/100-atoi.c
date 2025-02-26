#include "main.h"


/**
 * _isdigit - checks whether a character is a digit
 * @c: th character
 *
 * Return: 1 -> c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 * Return: numeral value of the first numeral substring of s
 */
int _atoi(char *s)
{
	int num, in, neg;

	num = in = neg = 0;
	while (s && *s != '\0')
	{
		if (*s == '-')
			neg++;
		else if (_isdigit(*s))
		{
			in++;
			while (*s != '\0')
				if (_isdigit(*s))
					num = num * 10 + (*s++ - '0');
				else
					break;
		}
		if (!in)
			s++;
		else
			break;
	}
	if (neg % 2 != 0)
		num *= -1;
	return (num);
}

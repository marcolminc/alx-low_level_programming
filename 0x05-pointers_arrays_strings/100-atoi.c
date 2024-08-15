#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string or 0 if NaN
 */
int _atoi(char *s)
{
	int sign, result, started;

	sign = 1, result = started = 0;
	while (*s != '\0')
	{
		if (*s == '-' && !started)
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			if (result > (2147483647 - (*s - '0')) / 10)
				return (sign == 1 ? 2147483647 : -2147483648);
			result = result * 10 + (*s - '0');
		}
		else if (started)
			break;
		s++;
	}
	return (result * sign);
}

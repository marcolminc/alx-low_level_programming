#include "main.h"


/**
 * positioner - computes powers of 10
 * @i: the index to raise 10 to
 *
 * Return: the power of 10
 */
int positioner(int i)
{
	int pow = 1, j;

	if (i == 0)
		return (pow);
	for (j = i; j >= 1; j--)
		pow *= 10;
	return (pow);
}

/**
 * _atoi - converts a string to a number
 * @s: the string
 *
 * Return: the resulting number
 */
int _atoi(char *s)
{
	int neg, i, j, pos, digits, num;

	neg = digits = num = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
			neg++;
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			digits++;
			if (*(s + i + 1) < 48  || *(s + i + 1) > 57)
			{
				pos = i + 1;
				break;
			}
		}
	}
	if (!digits)
		return (0);
	for (i = 0, j = digits - 1; i < pos; i++)
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
			num += ((*(s + i) - 48) * positioner(j)), j--;
	}
	if (neg % 2 != 0)
		num *= -1;
	return (num);
}

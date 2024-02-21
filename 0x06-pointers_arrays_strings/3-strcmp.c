#include "main.h"


/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: integral (int) difference
 */
int _strcmp(char *s1, char *s2)
{
	int i, rtn;

	i = rtn = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			rtn += (*(s1 + i) - *(s2 + i));
			break;
		}
		i++;
	}
	return (rtn);
}

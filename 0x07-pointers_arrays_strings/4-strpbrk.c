#include "main.h"
#include <unistd.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the given string
 * @accept: the set of bytes to find in s
 *
 * Return: location of found byte, otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, found;
	char *res;

	res = NULL, found = 0;
	for (i = 0; s && s[i]; i++)
	{
		for (j = 0; accept && accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				res = s + i, found++;
				break;
			}
		}
		if (found)
			break;
	}
	return (res);
}

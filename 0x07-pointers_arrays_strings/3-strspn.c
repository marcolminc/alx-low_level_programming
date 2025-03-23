#include "main.h"


/**
 * _strspn - gets the length of a prefix substring
 * @s: given string
 * @accept: the prefix string
 *
 * Return: length of a prefix subsring on s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, res, found;

	res = found = 0;
	for (i = 0; s && s[i]; i++)
	{
		for (j = 0; accept && accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				res++, found++;
				break;
			}
		}
		if (found)
			found--;
		else
			break;
	}
	return (res);
}

#include "main.h"
#include <unistd.h>


/**
 * _strstr - locates a substring
 * @haystack: the given string on which to locate the substring
 * @needle: the substring to locate in haystack
 *
 * Return: pointer to the beginning of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k, found, broke;
	char *res;

	res = NULL, found = broke = 0;
	for (i = 0; haystack && haystack[i]; i++)
	{
		if (haystack[i] == *needle)
		{
			res = haystack + i, found++;
			for (j = i + 1, k = 1; needle[k] && haystack[j]; j++, k++)
			{
				if (haystack[j] != needle[k])
				{
					res = NULL, broke++;
					break;
				}
			}
			if (found && !broke)
				return (res);
			found--, broke--;
		}
	}
	return (res);
}

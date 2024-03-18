#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search for a substring
 * @needle: the substring to search for
 * Return: pointer to beginning of found needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, match;
	char *begin;

	i = j = 0;
	begin = NULL;
	for (; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle + j))
		{
			begin = haystack + i;
			j++, match = 1;
			for (; *(needle + j) != '\0'; j++, i++)
			{
				if (*(haystack + i) != *(needle + j))
					match = 0;
			}
			if (match)
				return (begin);
		}
	}
	return (NULL);
}

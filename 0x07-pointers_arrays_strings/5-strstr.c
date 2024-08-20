#include "main.h"

/**
 * _strstr- finds the first occurence of a substring
 * @haystack: the string whose substring is searched
 * @needle: the substring to look for
 *
 * Return: the pointer for the first occurence if found or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *begin;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			begin = &haystack[i];
			j = 0;
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
				j++;
			if (needle[j] == '\0')
				return (begin);
		}
	}
	return (NULL);
}

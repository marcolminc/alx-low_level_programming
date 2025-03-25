#include "main.h"


/**
 * _strlen - computes length of a string
 * @s: string to measure
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s && s[i]; i++)
		;
	return (i);
}


/**
 * str_concat - concatenates two strings into a buffer
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the buffer containing concatenated s1 and s2
 * NULL, otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int size, i;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	size = _strlen(s1) + _strlen(s2) + 1;
	dest = malloc(size * sizeof(*dest));
	if (dest)
	{
		for (i = 0; s1[i]; i++)
			dest[i] = s1[i];
		while (*s2)
			dest[i++] = *s2++;
	}
	return (dest);
}


/**
 * argstostr - concatenates all (CLI) arguments of a program
 * @ac: number of (CLI) args passed
 * @av: vector of (CLI) args
 *
 * Return: string of all args, separated by new line characters
 */
char *argstostr(int ac, char **av)
{
	char *res, *temp;
	int i, j, len;

	res = temp = NULL;
	if (!ac || !av)
		return (res);
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);
		if (len)
		{
			temp = malloc((len + 2) * sizeof(char));
			if (temp)
			{
				for (j = 0; j < len; j++)
				{
					temp[j] = av[i][j];
				}
				temp[j++] = '\n';
				temp[j] = '\0';
				res = str_concat(res, temp);
				if (res)
					free(temp);
				temp = NULL;
			}
		}
	}
	return (res);
}

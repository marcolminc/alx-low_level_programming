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
 * argstostr - concatenates all (CLI) arguments of a program
 * @ac: number of (CLI) args passed
 * @av: vector of (CLI) args
 *
 * Return: string of all args, separated by new line characters
 */
char *argstostr(int ac, char **av)
{
	char *res;
	int i, j, k, len;

	res = NULL;
	if (!ac || !av)
		return (res);
	len = k = 0;
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;
	len++;
	if (len)
	{
		res = malloc(len * sizeof(char));
		if (res)
		{
			for (i = 0; i < ac; i++)
			{
				for (j = 0; av[i][j]; j++)
					res[k++] = av[i][j];
				res[k++] = '\n';
			}
			res[k] = '\0';
		}
	}
	return (res);
}

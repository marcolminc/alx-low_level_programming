#include "main.h"


/**
 * argstostr - concatenates all cmd args into a string
 * @ac: number of cmd args(size of av)
 * @av: the commands matrix (2d array)
 *
 * Return: the resulting string
 */
char *argstostr(int ac, char **av)
{
	int str_len, i, j, k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	str_len = k = 0, str = NULL;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str_len++;
		str_len++;
	}
	str = malloc((str_len + 1) * sizeof(*str));
	if (str)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
				str[k++] = av[i][j];
			str[k++] = '\n';
		}
		str[k] = '\0';
		return (str);
	}
	return (NULL);
}

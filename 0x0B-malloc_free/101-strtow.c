#include "main.h"


/**
 * num_rows - computes the number of rows for the array of words
 * @str: the string to extract from words, space-separated
 *
 * Return: number of rows
 */
int num_rows(char *str)
{
	int i, rows;

	for (i = 0, rows = 0; *(str + i) != '\0'; i++)
	{
		if (str[i + 1] == ' ' || str[i + 1] == '\0')
			i++, rows++;
		while (str[i] == ' ' && str[i++ + 1] == ' ')
			i++;
	}
	return (rows);
}


/**
 * free_arr - frees current malloc'ed rows
 * @arr: the array of words
 * @idx: current index of mallo'ed words
 *
 * Return: void
 */
void free_arr(char **arr, int idx)
{
	int i;

	for (i = 0; i < idx;  i++)
		free(arr[i]);
	free(arr);
}



/**
 * strtow - creates array (2-D) of words from a string, space-separated
 * @str: the string to extract words from
 *
 * Return: the array of words
 */
char **strtow(char *str)
{
	int i, rows, cols, j, k, l;
	char **arr;

	rows = k = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	while (*str == ' ')
		str++;
	rows = num_rows(str);
	if (rows == 0)
		return (NULL);
	arr = malloc((rows + 1) * sizeof(char *));
	if (arr)
	{
		for (i = 0, cols = 0; *(str + i) != '\0'; i++)
		{
			cols++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				j = i - (cols - 1), l = 0, arr[k] = malloc((cols + 1) * sizeof(char));
				if (arr[k])
				{
					while (j <= i)
						arr[k][l++] = str[j++];
					arr[k++][l] = '\0';
				}
				else
				{
					free_arr(arr, k);
					return (NULL);
				}
				i++, cols = 0;
			}
			while (str[i] == ' ' && str[i + 1] == ' ')
				i++;
		}
		arr[k] = NULL;
		return (arr);
	}
	return (NULL);
}

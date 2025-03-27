#include "main.h"
#include <stdio.h>


/**
 * count_words - counts (space-separated) words in a string
 * @str: string whose words to count
 *
 * Return: number of words in str
 */
int count_words(char *str)
{
	int i, words, in_word;

	words = 0, in_word = 0;
	for (i = 0; str && str[i]; i++)
		if (str[i] != ' ')
		{
			if (!in_word)
				words++, in_word = 1;
		}
		else
			in_word = 0;
	return (words);
}


/**
 * write_word - writes a word to a buffer of words vector
 * @res: the vector of words
 * @str: the given string of words
 * @k: number of words written to vector
 * @start: beginning of a word
 * @end: ending of a word
 *
 * Return: 1 -> word written successfully, 0 otherwise
 */
int write_word(char **res, char *str, int *k, int start, int end)
{
	int i, len;

	len = end - start;
	if (res && len)
	{
		res[*k] = malloc((len + 1) * sizeof(char));
		if (!res[*k])
		{
			for (i = 0; i < *k; i++)
				free(res[i]);
			free(res);
			return (0);
		}
		for (i = 0; i < len; i++)
			res[*k][i] = str[start + i];
		res[(*k)++][len] = '\0';
	}
	return (1);
}


/**
 * strtow - splits a string into words (separated by spaces)
 * @str: input string to split into words
 *
 * Return: the vector of words, NULL otherwise
 */
char **strtow(char *str)
{
	int words, i_i, i_w, i, k;
	char **res;

	res = NULL;
	words = count_words(str);
	if (!words)
		return (res);
	i_w = k = 0;
	res = malloc((words + 1) * sizeof(*res));
	if (!res)
		return (res);
	for (i = 0; str && str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (!i_w)
				i_w = 1, i_i = i;
			if (!str[i + 1])
				if (!write_word(res, str, &k, i_i, i + 1))
					return (NULL);
		}
		else
		{
			if (i_w)
				if (!write_word(res, str, &k, i_i, i))
					return (NULL);
			i_w = 0;
		}
	}
	res[k] = NULL;
	return (res);
}

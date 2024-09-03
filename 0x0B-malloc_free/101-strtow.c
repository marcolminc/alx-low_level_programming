#include "main.h"


/**
 * word_count - counts the number of words in a string
 * @str: the string to evaluate
 *
 * Return: the number of words
 */
int word_count(char *str)
{
	int count, in_word;

	count = in_word = 0;
	while (*str)
	{
		if (*str != ' ' && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == ' ')
			in_word = 0;
		str++;
	}
	return (count);
}


/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: the array of words
 */
char **strtow(char *str)
{
	char **words, *word;
	int i, j, k, word_len, wordc;

	if (str == NULL || *str == '\0')
		return (NULL);
	wordc = word_count(str);
	if (wordc == 0)
		return (NULL);
	words = malloc((wordc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = word_len = 0; i <= wordc; i++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (word_len > 0)
			{
				word = malloc((word_len + 1) * sizeof(char));
				if (word == NULL)
				{
					for (k = 0; k < i; k++)
						free(words[k]);
					free(words);
					return (NULL);
				}
				words[i - 1] = word, word[word_len] = '\0';
				word_len = 0;
			}
			j++;
		}
		else
		{
			if (word_len == 0)
				word = &str[j];
			word_len++;
			j++;
		}
	}
	words[wordc] = NULL;
	return (words);
}

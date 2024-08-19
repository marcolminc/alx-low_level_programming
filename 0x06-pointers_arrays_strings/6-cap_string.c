#include "main.h"


/**
 * is_separator - checks if a char is a word separator
 * @c: the char to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
		if (c == separators[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capiltalize
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	if (*(str + i) >= 'a' && *(str + i) <= 'z')
		*(str + i) = *(str + i) - 32;
	while (*(str + i) != '\0')
	{
		if (is_separator(*(str + i)) &&
					*(str + i + 1) >= 'a' &&
					*(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
		i++;
	}
	return (str);
}

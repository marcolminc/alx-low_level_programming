#include "main.h"


int is_delim(char c);
void to_upper(char *c);

/**
 * cap_string - capitalizes a string based on specified delimiters
 * @str:the string to capitalize
 *
 * Return: (capitalized) str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str && *(str + i) != '\0'; i++)
	{
		if (is_delim(*(str + i)) && *(str + i + 1) != '\0')
		{
			i++;
			while (is_delim(*(str + i)) && *(str + i + 1) != '\0')
				i++;
				to_upper((str + i));
		}
	}
	return (str);
}

/**
 * is_delim - checks for delimiters for capitalization
 * @c: character to check
 *
 * Return: 1 -> c is delimiter, 0 otherwise
 */
int is_delim(char c)
{
	const char DELIMETERS[13] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; *(DELIMETERS + i) != '\0'; i++)
	if (*(DELIMETERS + i) == c)
		return (1);
	return (0);
}


/**
 * to_upper - changes a lowercase character to uppercase
 * @c: given character
 *
 * Return: nothing
 */
void to_upper(char *c)
{
	if (c && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}


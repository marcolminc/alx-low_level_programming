#include "main.h"


/**
 * string_toupper - capitalizes a whole string
 * @str: the string to capitalize
 *
 * Return: pointer to capitalized string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) = *(str + i) - 32;
		i++;
	}
	return (str);
}

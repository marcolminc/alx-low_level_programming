#include "main.h"


/**
 * cap_string - capitalizes words of a string
 * @str: the string wholse words to capitalize
 *
 * Return: pointer to the (capitalized) string
 */
char *cap_string(char *str)
{
	int i, j;
	char delim[] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (*(str + i) != '\0')
	{
		for (j = 0; j < sizeof(delim); j++)
		{
			if (*(str + i) == delim[j])
			{
				if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
					*(str + i + 1) = *(str + i + 1) - 32;
				break;
			}
		}
		i++;
	}
	return (str);
}

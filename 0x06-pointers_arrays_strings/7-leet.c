#include "main.h"


/**
 * leet - encodes a string to 1337
 * @str: the given string to encode
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	leet_t enc[5] = {'a', 4, 'e', 3, 'o', 0, 't', 7, 'l', 1};
	int i, j;

	i = 0;
	while (*(str + i) != '\0')
	{
		for (i = 0; j < 5; j++)
		{
			if (*(str + i) == enc[j].letter
					|| *(str + i) + 32 == enc[j].letter)
			{
				*(str + i) = '0' + enc[j].num;
				break;
			}
		}
		i++;
	}
	return (str);
}

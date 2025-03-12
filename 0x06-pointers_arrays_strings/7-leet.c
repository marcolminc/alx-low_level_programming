#include "main.h"


/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	const char LETTERS[] = "aeotl";
	const char VALUES[] = "43071";

	for (i = 0; str && *(str + i) != '\0'; i++)
	{
		for (j = 0; *(LETTERS + j) != '\0'; j++)
		{
			if (*(str + i) == *(LETTERS + j) || (*(str + i) + 32) == *(LETTERS + j))
			{
				*(str + i) = *(VALUES + j);
				break;
			}
		}
	}

	return (str);
}

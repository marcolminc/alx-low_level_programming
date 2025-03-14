#include "main.h"


/**
 * _isalpha - checks for alphabetic characters (upper-/lower-case)
 * @c: the character to check
 *
 * Return: 1 -> is alpha, 0 otherwise
 */
int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/**
 * rot13 - encodes a string by ROT-13 cipher
 * @str: the string to encode
 *
 * Return: (encoded) str
 */
char *rot13(char *str)
{
	int i;
	char c;

	for (i = 0; str && *(str + i) != '\0'; i++)
	{
		while (!_isalpha(*(str + i)))
			i++;
		c = *(str + i);
		if (c >= 'a' && c <= 'z')
			*(str + i) = (((c - 'a') + 13) % 26) + 'a';
		else
			*(str + i) = (((c - 'A') + 13) % 26) + 'A';
	}
	return (str);
}

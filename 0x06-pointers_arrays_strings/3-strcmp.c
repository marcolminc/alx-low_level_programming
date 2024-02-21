#include "main.h"


/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: integral difference (integers).
 */
int _strcmp(char *s1, char *s2)
{
	int rtn, i;

	rtn = i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
		rtn += *(s1 + i) - *(s2 + i), i++;
	return (rtn);
}

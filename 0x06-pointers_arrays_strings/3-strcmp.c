#include "main.h"


/**
 * _strcmp - compares two srings
 * @s1: first string
 * @s2: second string
 *
 * Return: cumulative difference btn chars of s1 and s2 (integer)
 */
int _strcmp(char *s1, char *s2)
{
	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (-*s2);
	if (!s2)
		return (*s1);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		s1++, s2++;
	return (*s1 - *s2);
}

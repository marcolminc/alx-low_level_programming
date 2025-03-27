#include "main.h"


/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters from s2 to concatenate s1 with
 *
 * Return: concatenated string, otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *res;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	res = malloc((_strlen(s1) + n + 1) * sizeof(*res));
	if (!res)
		return (NULL);
	for (i = 0; s1[i]; i++)
		res[i] = s1[i];
	for (j = 0; j < n && s2[j]; j++)
		res[i++] = s2[j];
	res[i] = '\0';
	return (res);
}

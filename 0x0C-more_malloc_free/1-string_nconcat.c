#include "main.h"


/**
 * string_nconcat - concatenates two strings
 * up to n bytes from the second string
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes from the second string
 *
 * Return: the new string or null if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int  len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = NULL;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
		n = len2;
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	ptr = malloc((len1 + n + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (len1 = 0; s1[len1] != '\0'; len1++)
		ptr[len1] = s1[len1];
	for (len2 = 0; len2 < n; len2++)
		ptr[len1++] = s2[len2];
	ptr[len1] = '\0';
	return (ptr);
}

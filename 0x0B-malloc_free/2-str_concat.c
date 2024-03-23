#include "main.h"


/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: resulting string
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, j, size;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	size = 0;
	if (s1 != NULL)
		for (i = 0; *(s1 + i) != '\0'; i++)
			size++;
	if (s2 != NULL)
		for (i = 0; *(s2 + i) != '\0'; i++)
			size++;
	ptr = (char *)malloc(size + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1 != NULL && *(s1 + i) != '\0'; i++)
		*(ptr + i) = *(s1 + i);
	for (j = 0; s2 != NULL && *(s2 + j) != '\0'; j++, i++)
		*(ptr + i) = *(s2 + j);
	*(ptr + i) = '\0';
	return (ptr);
}

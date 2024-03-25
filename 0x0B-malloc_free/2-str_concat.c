#include "main.h"


/**
 * str_concat - concatenates two input strings onto another
 * @s1: the first input string
 * @s2: the second input string
 * Return: the resulting string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t i, j, size;

	if (s1 == NULL && s2 == NULL)
	{
		ptr = (char *)malloc(1);
		if (ptr == NULL)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	size = 0;
	if (s1 != NULL)
		for (i = 0; *(s1 + i) != '\0'; i++)
			size++;
	if (s2 != NULL)
		for (i = 0; *(s2 + i) != '\0'; i++)
			size++;
	size++;
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1 != NULL && *(s1 + i) != '\0'; i++)
		*(ptr + i) = *(s1 + i);
	for (j = 0; s2 != NULL && *(s2 + j) != '\0'; j++, i++)
		*(ptr + i) = *(s2 + j);
	*(ptr + i) = '\0';
	return (ptr);
}

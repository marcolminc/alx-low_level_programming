#include "main.h"


/**
 * _strdup - duplicates a string onto a variable
 * @str: the string to duplicate
 * Return: the duplicate string
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t i, str_size;

	if (str == NULL)
		return (NULL);
	i = str_size = 0;
	while (*(str + str_size) != '\0')
		str_size++;
	ptr = (char *)malloc(str_size + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (; *(str + i) != '\0'; i++)
		*(ptr + i) = *(str + i);
	*(ptr + i) = '\0';
	return (ptr);
}

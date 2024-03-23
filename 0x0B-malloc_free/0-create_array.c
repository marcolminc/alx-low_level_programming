#include "main.h"


/**
 * create_array - creates an initialize an array of chars
 * @size: size of the array
 * @c: the initialization char
 * Return: the(initialized) array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		*(ptr + i) = c;
	return (ptr);
}

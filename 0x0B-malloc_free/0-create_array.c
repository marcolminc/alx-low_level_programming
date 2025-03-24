#include "main.h"


/**
 * create_array - creates and initializes an array
 * @size: size of array to create
 * @c: the byte to initialize the create array with
 *
 * Return: the array, NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *res;

	res = NULL;
	if (size)
	{
		res = malloc(size * sizeof(*res));
		if (res)
			for (i = 0; i < size; i++)
				*(res + i) = c;
	}
	return (res);
}

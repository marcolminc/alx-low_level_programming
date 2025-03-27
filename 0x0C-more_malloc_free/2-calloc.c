#include "main.h"


/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members of the array
 * @size: size of a member of the array
 *
 * Return: zeroed memory, NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *res;

	if (!nmemb || !size)
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		res[i] = 0;
	return ((void *)res);
}

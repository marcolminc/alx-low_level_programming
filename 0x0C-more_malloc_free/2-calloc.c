#include "main.h"


/**
 * _calloc - allocates memory for an array and initialize it to zero
 * @nmemb: number of members of the array
 * @size: size of each member (in bytes)
 *
 * Return: the allocated memory, NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *temp;
	unsigned int num_bytes;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	num_bytes = nmemb * size, temp = ptr;
	while (num_bytes--)
		*temp++ = 0;
	return (ptr);
}

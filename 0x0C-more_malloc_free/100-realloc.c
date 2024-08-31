#include "main.h"


/**
 * _realloc - implementation of realloc function
 * @ptr: the memory
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: the memory, NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, lim;
	char *temp1, *temp2;
	void *ptrr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr == NULL ? NULL : ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptrr = malloc(new_size);
	if (ptrr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	lim = (new_size > old_size) ? old_size : new_size;
	temp1 = ptr, temp2 = ptrr;
	for (i = 0; i < lim; i++)
		temp2[i] = temp1[i];
	free(ptr);
	return (ptrr);
}

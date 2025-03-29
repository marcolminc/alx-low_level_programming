#include "main.h"


/**
 * _realloc - reallocates a memory block, using malloc() and free()
 * @old_size: old size in bytes
 * @new_size: new size in bytes
 * @ptr: old memory block
 *
 * Return: new memory block, NULL or ptr otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *res;

	res = NULL;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	res = malloc(new_size);
	if (!res)
		return (NULL);
	if (!ptr)
		return (res);
	for (i = 0; i < old_size && i < new_size; i++)
		*(char *)(res + i) = *((char *)ptr + i);
	free(ptr);
	return (res);
}

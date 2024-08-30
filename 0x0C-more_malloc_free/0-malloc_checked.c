#include "main.h"


/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of memory
 *
 * Return: pointer to allocated memory
 * if malloc fails, the function exits with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

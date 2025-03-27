#include "main.h"


/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: a pointer to the allocated memory
 * if malloc fails, exit the program with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *res;

	res = malloc(b);
	if (!res)
		exit(98);
	return (res);
}

#include "main.h"

/**
 * set_bit - function to sets the value of a bit.
 * @n: p of an und long int.
 * @index: index of the bit.
 * Return: 1 or -1.
 * amine mohamed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int f;

	if (index > 63)
		return (-1);

	f = 1 << index;
	*n = (*n | f);

	return (1);
}


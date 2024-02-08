#include "main.h"

/**
 * clear_bit - this function sets the value of a bit to 0.
 * @n: p uns long int.
 * @index: index of the bit.
 * Return: 1 or -1.
 * amine mohamed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r;

	if (index > 63)
		return (-1);

	r = 1 << index;

	if (*n & r)
		*n ^= r;

	return (1);
}


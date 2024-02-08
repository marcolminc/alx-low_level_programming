#include "main.h"

/**
 * get_bit - function to returns the value
 *  of a bit at a given
 * index.
 * @n: unsigned long int.
 * @index: bit index.
 * Return: value of the bit.
 * amine mohamed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}


#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: num 1.
 * @m: num 2.
 * Return: number of bits.
 * amine mohamed
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_of_bits;

	for (num_of_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_of_bits++;
	}

	return (num_of_bits);
}


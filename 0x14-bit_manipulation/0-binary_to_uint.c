#include "main.h"

/**
 * binary_to_uint - function to converts a binary
 * number to an unsigned int.
 * @b: varibale contains binary.
 * Return: unsigned int.
 * mohamed amine
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	int L, bt;

	if (!b)
		return (0);

	n = 0;

	for (L = 0; b[L] != '\0'; L++)
		;
	for (L--, bt = 1; L >= 0; L--, bt *= 2)
	{
		if (b[L] != '0' && b[L] != '1')
		{
			return (0);
		}

		if (b[L] & 1)
		{
			n += bt;
		}
	}

	return (n);
}


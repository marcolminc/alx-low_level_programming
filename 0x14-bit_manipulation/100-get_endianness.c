#include "main.h"

/**
 * get_endianness -this function  checks the endianness
 * Return: 0 or 1
 * amine mohamed
 */
int get_endianness(void)
{
	unsigned int y;
	char *b;

	y = 1;
	b = (char *) &y;

	return ((int)*b);
}


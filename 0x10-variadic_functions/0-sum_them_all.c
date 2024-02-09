#include "variadic_functions.h"

/**
 * sum_them_all - sums variable number of unsigned ints passed
 * @n: the first number
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	sum = 0;
	if (n == 0)
		return (sum);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	return (sum);
}

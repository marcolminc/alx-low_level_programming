#include "variadic_functions.h"


/**
 * sum_them_all - sums all its params
 * @n: number of args passed
 *
 * Return: sum of n int paramsg
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	sum = 0;
	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
	}
	return (sum);
}

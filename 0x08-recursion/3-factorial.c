#include "main.h"

/**
 * factorial - computes factorial of a given number
 * @n: the number whose factorial should be computed
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

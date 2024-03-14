#include "main.h"

/**
 * is_prime_number_helper - recursively check whether number is prime
 * @n: the number
 * @test: number to test whether n is divisible by
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number_helper(int n, int test)
{
	if (n < 2)
		return (0);
	else if (test >= n / 2)
		return (1);
	else if (n % test == 0)
		return (0);
	else
		return (is_prime_number_helper(n, test + 1));
}

/**
 * is_prime_number - checks whether a number is prime
 * @n: the number to check
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}

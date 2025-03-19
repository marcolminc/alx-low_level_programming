#include "main.h"
#include <stdint.h>


/**
 * _sqrt_helper - recursively finds the natural square root of n
 * @n: the number to find natural squre root of
 * @lo: lower bound of binary search
 * @hi: higher bound of binary search
 *
 * Return: the square root, -1 otherwise
 */
int _sqrt_helper(__uint64_t n, __uint64_t lo, __uint64_t hi)
{
	__uint64_t md;

	md = (lo + hi) / 2;
	if (md * md == n)
		return (md);
	if (lo > hi)
		return (-1);
	if (md * md > n)
		return (_sqrt_helper(n, lo, md - 1));
	return (_sqrt_helper(n, md + 1, hi));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find square root of
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt_helper(n, 0, n / 2));
}

/**
 * _is_prime_number_helper - recursively finds out whether n is prime
 * @n: given number
 * @i: factor to test with, which will recursively be increased
 *
 * Return: 1 -> n is prime, 0 otherwise
 */
int _is_prime_number_helper(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i > _sqrt_recursion(n))
		return (1);
	return (_is_prime_number_helper(n, i + 1));
}
/**
 * is_prime_number - finds out whether a number is a prime number
 * @n: the number to find out whether prime or not
 *
 * Return: 1 -> is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return (_is_prime_number_helper(n, 2));
}

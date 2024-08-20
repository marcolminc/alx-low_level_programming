#include "main.h"

/**
 * _sqrt_recursion_helper - recursive binary alogorithm for sqrt_recursion
 * @n: the int whose natureal square root is required
 * @low: lower bound
 * @high: upper bound
 * Return: the square root
 */
int _sqrt_recursion_helper(int n, int low, int high)
{
	int mid, square;

	if (low > high)
		return (-1);
	mid = low + (high - low) / 2;
	square = mid * mid;
	if (square == n)
		return (mid);
	else if (square < n)
		return (_sqrt_recursion_helper(n, mid + 1, high));
	else
		return (_sqrt_recursion_helper(n, low, mid - 1));
}

/**
 * _sqrt_recursion - computes natural square root of an int
 * @n: the int whose square root is required
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(n, 0, n));
}

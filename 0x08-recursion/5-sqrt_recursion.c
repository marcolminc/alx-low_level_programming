#include "main.h"

/**
 * _sqrt_recursion_helper - recursive binary alogorithm for sqrt_recursion
 * @n: the int whose natureal square root is required
 * @i: the iterative counter
 *
 * Return: the square root
 */
int _sqrt_recursion_helper(int n, int i)
{
	int root;

	if (n == 0 || n == 1)
		return (n);
	root = i * i;
	if (root == n)
		return (i);
	if (root > n)
		return (-1);
	return (_sqrt_recursion_helper(n, i + 1));
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
	return (_sqrt_recursion_helper(n, 1));
}

#include "3-calc.h"


/**
 * op_add - adds two integers
 * @a: first addend
 * @b: second addend
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts one integer from another
 * @a: minuend
 * @b: subtrahend
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: multiplicand
 * @b: multiplier
 *
 * Return: a x b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one integer by another
 * @a: the dividend
 * @b: the divisor
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - computes modulus of a divided by b
 * @a: dividend
 * @b: divisor
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}

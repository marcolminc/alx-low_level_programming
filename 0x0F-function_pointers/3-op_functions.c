#include "3-calc.h"

/**
* op_add - computes the sum of a and b
 * @a: The first argument
 * @b: The second argument
 *
 * Return: the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}


/**
* op_sub - computes the difference of a and b
 * @a: The first argument
 * @b: The second argument
 *
 * Return: the difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}


/**
* op_mul - computes the product of a and b
 * @a: The first argument
 * @b: The second argument
 *
 * Return: the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}


/**
* op_div - computes the division of a and b
 * @a: The first argument
 * @b: The second argument
 *
 * Return: the result of a / b
*/
int op_div(int a, int b)
{
	return (a / b);
}


/**
* op_mod - computes the modulus (remainder) of a / b
 * @a: The first argument
 * @b: The second argument
 *
 * Return: the remainder of a / b
*/
int op_mod(int a, int b)
{
	return (a % b);
}

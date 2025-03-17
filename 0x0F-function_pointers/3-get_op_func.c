#include "3-calc.h"


/**
 * get_op_func - returns operation function by given character
 * @s: the character specifying an operation
 *
 * Return: operation function if found, NULL otherwise
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (s && ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}

#include "3-calc.h"


/**
* get_op_func - selects the correct function to perform required operation
 * @s: the operator passed as argument to the calc program
 *
 * Return: the function (pointer) that corresponds to the operator specified
*/
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op == 0))
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}


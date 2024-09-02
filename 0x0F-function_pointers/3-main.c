#include "3-calc.h"


/**
* main - entry point for the calculator app
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, any other otherwise
*/
int main(int argc, char *argv[])
{
	int result, (*op)(int, int), num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op(num1, num2);
	printf("%d\n", result);
	return (0);
}

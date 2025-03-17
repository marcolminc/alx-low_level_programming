#include "3-calc.h"


/**
 * main - check code!
 * @argc: number of CLI args passed
 * @argv: vector of CLI args passed
 *
 * Return: 0 -> succcess
 */
int main(int argc, char **argv)
{
	int num1, num2, res;
	int (*f)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]), num2 = atoi(argv[3]);
	op = argv[2];
	f = get_op_func(op);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	res = f(num1, num2);
	printf("%d\n", res);
	return (0);
}

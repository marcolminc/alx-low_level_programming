#include <stdio.h>
#include <stdlib.h>


/**
 * main - sums two numbers passed to it
 * @argc: number of CLI args
 * @argv: vector of CLI args
 *
 * Return: 0 -> success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int sum, i, current;
	char *endptr;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		current = (int)strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		if (current >= 0)
			sum += current;
	}
	printf("%d\n", sum);

	return (0);
}

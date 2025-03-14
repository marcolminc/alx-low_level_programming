#include "main.h" 

/**
 * main - prints the number of CLI args
 * @argc: number of CLI args
 * @argv: vector of CLI args
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

#include <stdio.h>


/**
 * main - prints CLI args passed to it
 * @argc: number of CLI args
 * @argv: vector of CLI args
 *
 * Return: 0 -> success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

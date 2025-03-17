#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * print_opcodes - prints opcodes of fxn
 * @fxn: the function whose opcodes to print
 * @bytes: number of bytes desired to print
 *
 * Return: nothing
 */
void print_opcodes(void *fxn, size_t bytes)
{
	unsigned char *opcodes;
	size_t i;

	opcodes = (unsigned char *)fxn;
	for (i = 0; opcodes && i < bytes; i++)
	{
		printf("%02x", opcodes[i]);
		if (i < bytes - 1)
			printf(" ");
	}
}

/**
 * main - see code
 * @argc: number of CLI args passed
 * @argv: vector of CLI opcodes passed
 *
 * Return: 0 -> success
 * 1 -> wrong number of CLI args passed
 * 2 -> negative number of bytes passed
 */
int main(int argc, char **argv)
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(main, bytes);
	printf("\n");
	return (0);
}

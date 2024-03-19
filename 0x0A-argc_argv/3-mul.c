#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of args(size of argv)
 * @argv: array of args passed
 * Return: exit success(0 for success)
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

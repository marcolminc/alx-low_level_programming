#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - adds positive numbers passed indefinitely
 * @argc: number of args
 * @argv: args vector
 * Return: exit status(0 for success)
 */
int main(int argc, char **argv)
{
	int sum, i, j;

	if (argc < 2)
	{
		puts("0");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

#include<stdio.h>


/**
 * main - prints the number of args passed to it
 * @argc: the  number of args
 * @argv: the array of args
 *
 * Return: exit status (0 for success)
 */
int main(int argc, char argv[])
{
	(void) argv;

	printf("%d\n", (argc - 1));
	return (0);
}

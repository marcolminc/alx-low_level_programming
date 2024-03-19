#include "main.h"

/**
 * main - prints the program's name, followed by a new line
 * @argc: number of args passed(size of argv[])
 * @argv: array of args passed
 * Return: exit status(0 for success)
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}

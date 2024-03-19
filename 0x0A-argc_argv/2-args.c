#include "main.h"

/**
 * main - prints all args it receives
 * @argc: size of argv(number of args)
 * @argv: array of strings(args)
 * Return: exit status(0 for success)
 */
int main(int argc, char **argv)
{
	while(argc--)
		printf("%s\n", *argv++);
	return (0);
}

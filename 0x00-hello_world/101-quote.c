#include<unistd.h>

/**
 * main - prints a quote to stderr
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg) - 1);
	return (1);
}

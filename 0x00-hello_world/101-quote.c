#include<unistd.h>


/**
 * main - entry point
 *
 * Return: 0 for success.
 */
int main(void)
{
	char buff[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, buff, sizeof(buff) - 1);

	return (1);
}

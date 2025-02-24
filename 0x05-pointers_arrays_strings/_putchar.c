#include<unistd.h>


/**
 * _putchar - custom putchar function
 * writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: sys call return int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

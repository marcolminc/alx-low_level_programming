#include "main.h"
#include <unistd.h>


/**
 * _putchar - prints a character to stdout
 * @c: the character to print
 *
 * Return: 1 -> success, 0 otherwise
 */
int _putchar(char c)
{
	return (write(2, &c, 1));
}

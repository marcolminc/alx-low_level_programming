#include "main.h"


/**
 * _puts - prints a string character by character,
 * followed by a new line.
 * @str: the string to be printed
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
		putchar(*str++);
	putchar('\n');
}

#include "main.h"


/**
 * main - prints '_putchar', followed by newline
 *
 * Return: 0 -> success
 */
int main(void)
{
	int i;
	char *str = "_putchar\n";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (0);
}


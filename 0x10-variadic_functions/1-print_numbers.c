#include "variadic_functions.h"
#include<stdio.h>

/**
 * print_numbers - prints numbers, separated by provided char
 * @separator: the separator charactor
 * @n: the first number
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((separator != NULL) && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

}

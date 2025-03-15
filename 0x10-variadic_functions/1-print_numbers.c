#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_numbers - prints numbers
 * @separator: the number separator
 * @n: number of numbers to print
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (separator && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
}

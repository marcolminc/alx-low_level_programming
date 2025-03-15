#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_strings - prints strings, followed by a new line
 * @separator: given string separator
 * @n: number of strings to print
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
			if (separator && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
}

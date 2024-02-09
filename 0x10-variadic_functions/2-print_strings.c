#include "variadic_functions.h"
#include<stdio.h>

/**
 * print_strings - prints strings, separated by separator
 * @separator: the string separator
 * @n: number of args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *ptr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char*);
		if (ptr == NULL)
			printf("nil");
		else
			printf("%s", ptr);
		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
}

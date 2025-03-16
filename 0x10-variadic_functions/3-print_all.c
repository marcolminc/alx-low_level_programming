#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_all - prints the args as specified by format string
 * @format: the format string
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i; 
	va_list ap;
	char *str, *nil;

	nil = "(nil)";
	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					str = nil;
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
}

#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints args based on specified type
 * @format: the format specifier
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int type_index;
	char *s, *nil;
	va_list ap;

	nil = "(nil)", type_index = 0;
	va_start(ap, format);
	while (format[type_index] != '\0')
	{
		switch (format[type_index])
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
				s = va_arg(ap, char*);
				if (s)
					printf("%s", s);
				else
					printf("%s", nil);
				break;
			default:
				break;
		}
		if (format[type_index + 1] != '\0' && (format[type_index] == 'c'
			|| format[type_index] == 'i' || format[type_index] == 'f'
			|| format[type_index] == 's'))
			printf(", ");
		type_index++;
	}
	printf("\n");
	va_end(ap);
}

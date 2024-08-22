#include "variadic_functions.h"


/**
 * print_all - prints args based on specified type
 * @format: the format specifier
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	char *s, *nil;
	va_list ap;

	nil = "(nil)";
	i = 0;
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
				s = va_arg(ap, char *);
				if (!s)
					s = nil;
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}

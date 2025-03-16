#include "variadic_functions.h"
#include <stdio.h>


/**
 * num_sep - gives number of specified formats from the format string
 * @str: the given format string
 *
 * Return: number of specified formats
 */
int num_sep(const char * const str)
{
	int i, n;

	i = n = 0;
	while (str && str[i] != '\0')
	{
		switch (str[i])
		{
			case 'c':case 'i':case 'f':case 's':
				n++;
				break;
			default:
				break;
		}
		i++;
	}
	return (n);
}

/**
 * sep - prints out the separation chars (, )
 * @seps: remaining number of separators to print
 *
 * Return: nothing
 */
void sep(int *seps)
{
	(*seps)--;
	if (*seps > 0)
		printf(", ");
}

/**
 * print_str - prints string for format 's'
 * @str: string to print, extracted from ap
 *
 * Return: nothing
 */
void print_str(char *str)
{
	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints the args as specified by format string
 * @format: the format string
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, seps;
	va_list ap;
	char *str;

	va_start(ap, format);
	seps = num_sep(format), i = 0;
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				sep(&seps);
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				sep(&seps);
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				sep(&seps);
				break;
			case 's':
				str = va_arg(ap, char *);
				print_str(str);
				sep(&seps);
				break;
			default:
				break;
		}
		i++;
	}
}

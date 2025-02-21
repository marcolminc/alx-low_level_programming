#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n++ < 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
	else
	{
		while (n >= 99)
		{
			printf("%d", n);
			if (n-- > 98)
				printf(", ");
		}
		printf("\n");
	}
}

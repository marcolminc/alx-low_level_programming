#include <stdio.h>
#include "main.h"

/**
 * main - prints a fizz-buzz series
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz" );
			else
				printf("Fizz");
		}
		else if (i % 5 == 0)
			_printf("Buzz");
		else
			_printf("%d", i);
		if (i < 100)
			_putchar(' ');
	}
	_putchar('\n');
	return (0);
}

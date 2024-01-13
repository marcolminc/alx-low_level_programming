#include <stdio.h>
#include <stdint.h>


/**
 * main - prints first 98 elements of fibonacci series
 * from 1 and 2
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	uintmax_t prev, next, sum;
	int i;

	i = 3, prev = 1, next = 2, sum = 0;
	printf("%ju, %ju, ", prev, next);
	for (; i <= 98; i++)
	{
		sum = prev + next;
		printf("%ju", sum);
		if (i < 98)
			printf(", ");
		prev = next, next = sum;
	}
	putchar('\n');
	return (0);
}

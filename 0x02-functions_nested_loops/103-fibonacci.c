#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum of even terms of fibonacci series
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int prev, next, temp, sum;
	const unsigned int LIMIT = 4000000;

	prev = 1, next = 2, temp = 0, sum = 0;
	while (temp < LIMIT)
	{
		temp = prev + next;
		sum += (temp % 2 == 0) ? temp : 0;
		prev = next, next = temp;
	}
	printf("%u\n", sum);
	return (0);
}

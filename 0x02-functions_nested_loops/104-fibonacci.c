#include <stdio.h>



/**
 * print_uint128_t - prints uint128_t number
 * @n: the number to print
 *
 * Return: nothing
 */
void print_uint128_t(__uint128_t n)
{
	if (n > 9)
		print_uint128_t(n / 10);
	putchar((n % 10) + '0');
}

/**
 * print_space - prints a comma followed by a space
 *
 * Return: nothing
 */
void print_space(void)
{
	putchar(','), putchar(' ');
}
/**
 * main - prints first 50 Fibonacci numbers
 *
 * Return: 0 -> success
 */
int main(void)
{
	__uint128_t prev, curr, nxt;
	int i;

	prev = 1, curr = 2, nxt = 0;
	print_uint128_t(prev);
	print_space();
	print_uint128_t(curr);
	print_space();
	for (i = 1; i <= 96; i++)
	{
		nxt = prev + curr;
		prev = curr, curr = nxt;
		print_uint128_t(curr);
		if (i < 96)
			print_space();
	}
	putchar('\n');
	return (0);
}

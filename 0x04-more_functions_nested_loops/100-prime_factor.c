#include <stdio.h>


/**
 * main - entry point
 *
 * Return:0 -> success
 */
int main(void)
{
	unsigned long i, n;

	n = 612852475143, i = 2;
	while (i * i <= n)
		if (n % i == 0)
			n /= i;
		else
			i++;
	printf("%lu\n", n);
	return (0);
}

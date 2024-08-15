#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i = 2; /*the first prime factor*/

	while (i * i <= n) /*looping till the square or so of n*/
	{
		if (n % i == 0) /* if i is a factor*/
		{
			n /= i; /* update n by dividing by i to remove the factor of i*/
		}
		else
		{
			i++; /* move on to the next possible factor*/
		}
	}

	printf("%lu\n", n);

	return (0);
}


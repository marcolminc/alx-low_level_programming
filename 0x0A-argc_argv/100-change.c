#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints minimum number of coins to make change for an amount
 * @argc: number of args
 * @argv: args vector
 * Return: exit status(0 for success)
 */
int main(int argc, char **argv)
{
	int cents, amount;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	cents = 0;
	amount = atoi(argv[1]);
	if (amount < 0)
		puts("0");
	while (amount)
	{
		if (amount % 25 == 0)
			cents++, amount -= 25;
		else if (amount % 10 == 0)
			cents++, amount -= 10;
		else if (amount % 5 == 0)
			cents++, amount -= 5;
		else if (amount % 2 == 0)
			cents++, amount -= 2;
		else
			cents++, amount--;
	}
	printf("%d\n", cents);
	return (0);
}

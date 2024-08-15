#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int a1, a2, b1, b2, c1, c2;
	int i;

	a1 = 0, a2 = 1;  /* Represents the number 1*/
	b1 = 0, b2 = 2;  /* Represents the number 2*/

	printf("1, 2");  /* Print the first two Fibonacci numbers*/

	for (i = 2; i < 98; i++)
	{
		c1 = a1 + b1;  /* Calculate the higher part*/
		c2 = a2 + b2;  /* Calculate the lower part*/

		/* Handle overflow by moving carry over*/
		if (c2 >= 100000000)
		{
			c1 += 1;
			c2 -= 100000000;
		}

		/* Print the current Fibonacci number*/
		if (c1 > 0)
			printf(", %u%08u", c1, c2);  /* Print the combined large number*/
		else
			printf(", %u", c2);  /* Print the smaller number*/

		/* Move to the next Fibonacci pair*/
		a1 = b1, a2 = b2;
		b1 = c1, b2 = c2;
	}

	printf("\n");
	return (0);
}

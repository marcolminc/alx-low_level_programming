#include "dog.h"
#include <stdio.h>


/**
 * print_dog - prints members of a dog structure
 * @d: the dog structure
 * REturn: void
 */
void print_dog(struct dog *d)
{
	const char *nil = "(nil)";

	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("%sName: \n", nil);
	if (!(d->age < 0 || d->age > 30))
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", nil);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: %s\n", nil);
}

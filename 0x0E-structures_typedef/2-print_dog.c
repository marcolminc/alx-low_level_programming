#include "dog.h"
#include <stdio.h>


/**
 * print_dog - prints a struct dog object (variable)
 * @d: struct dog variable (object)
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}

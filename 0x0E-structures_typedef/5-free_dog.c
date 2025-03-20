#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - frees dogs (dog_t variables)
 * @d: the dog (dog_t variabe) to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}

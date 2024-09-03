#include "dog.h"


/**
 * free_dog - frees dogs
 * @d: the dog structure to free;
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}

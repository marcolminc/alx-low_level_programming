#include "dog.h"

/**
 * init_dog - initializes a variable of dog structure
 * @d: the dog structure variable
 * @name: name given to the dog
 * @age: age of the dog
 * @owner: name of owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}

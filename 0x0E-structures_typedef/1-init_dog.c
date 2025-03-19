#include "dog.h"


/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog variable
 * @name: member of dog object for name of the dog
 * @owner: member of dog object for name of the owner of a dog
 * @age: member of dog object for age of a dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}

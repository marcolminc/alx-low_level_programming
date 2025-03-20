#ifndef DOG_H
#define DOG_H

/* structures */
/**
 * struct dog - represents dog ownership data (details)
 * @name: name of a dog
 * @owner: owner of a dog
 * @age: age of a dog
 *
 * Description: This structure is an object for storing information
 * about a dog and its ownership.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};


/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

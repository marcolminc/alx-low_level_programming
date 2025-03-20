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
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;


/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);


#endif /* DOG_H */

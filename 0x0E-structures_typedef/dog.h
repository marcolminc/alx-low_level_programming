#ifndef DOG_H
#define DOG_H


/* includes */
#include <stdlib.h>


/**
 * struct dog - a structure for dog's particulars
 * @name: name given to the dog
 * @owner: name of the owner of the dog
 * @age: the age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};


#endif /* DOG_H */

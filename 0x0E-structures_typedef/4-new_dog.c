#include "dog.h"
#include <stdlib.h>


/**
 * _strdup - copies a string into a new buffer (heap)
 * @src: source string
 *
 * Return: dest string buffer
 */
char  *_strdup(char *src)
{
	size_t i, len;
	char *dest;

	dest = NULL;
	if (src)
	{
		len = 0;
		while (*(src + len) != '\0')
			len++;
		dest = malloc((len + 1) * sizeof(char));
		if (!dest)
			return (dest);
		for (i = 0; i < len; i++)
			*(dest + i) = *(src + i);
		*(dest + i) = '\0';
	}
	return (dest);
}


/**
 * new_dog - creates a new dog (object / variable)
 * @name: name of a new dog
 * @age: age of a new dog
 * @owner: owner of a new dog
 *
 * Return: new dog (dog_t object)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_cpy, *owner_cpy;
	dog_t *new;

	name_cpy = _strdup(name);
	if (!name_cpy)
		return (NULL);
	owner_cpy = _strdup(owner);
	if (!owner_cpy)
	{
		free(name_cpy);
		return (NULL);
	}
	new = malloc(sizeof(dog_t));
	if (!new)
	{
		free(name_cpy);
		free(owner_cpy);
		return (NULL);
	}
	new->age = age;
	new->name = name_cpy;
	new->owner = owner_cpy;
	return (new);
}

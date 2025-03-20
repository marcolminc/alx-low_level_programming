#include "dog.h"
#include <stdlib.h>


/**
 * _strlen - finds length of a string
 * @s: given string to measure
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	if (!s || *s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}


/**
 * _strcpy - copies a string into a new buffer (heap)
 * @src: source string
 *
 * Return: dest string buffer
 */
char  *_strcpy(char *src)
{
	int i, len;
	char *dest;

	dest = NULL;
	if (!src)
		return (dest);
	len = _strlen(src);
	dest = malloc(len * sizeof(char) + 1);
	if (!dest)
		return (dest);
	for (i = 0; i < len - 1; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
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
	char *name_cpy;
	char *owner_cpy;
	dog_t *new;

	name_cpy = _strcpy(name);
	owner_cpy = _strcpy(owner);
	new = malloc(sizeof(dog_t));
	if (!name_cpy || !owner_cpy || !new)
		return (NULL);
	new->age = age;
	new->name = name_cpy;
	new->owner = owner_cpy;
	return (new);
}

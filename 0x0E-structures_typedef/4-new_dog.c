#include "dog.h"

/**
 * _strdup - duplicates a string onto a variable
 * @str: the string to duplicate
 * Return: the duplicate string
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t i, str_size;

	if (str == NULL)
		return (NULL);
	str_size = 0;
	while (str[str_size] != '\0')
		str_size++;
	ptr = malloc((str_size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < str_size; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}


/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: the new dog, NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *dog_name, *dog_owner;
	dog_t *new_dog;

	dog_name = _strdup(name);
	if (dog_name == NULL)
		return (NULL);
	dog_owner = _strdup(owner);
	if (dog_owner == NULL)
	{
		free(dog_name);
		return (NULL);
	}
	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL)
	{
		free(dog_name);
		free(dog_owner);
		return (NULL);
	}
	new_dog->name = dog_name;
	new_dog->age = age;
	new_dog->owner = dog_owner;
	return (new_dog);
}

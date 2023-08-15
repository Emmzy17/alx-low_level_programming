#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * *new_dog - creates a new dog object
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 * Return: Dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		return (NULL);
	}
	dog->name = strdup(name);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;
	dog->owner = strdup(owner);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	return (dog);
}

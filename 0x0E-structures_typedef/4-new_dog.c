#include "dog.h"
#include <stdlib>
/**
 * new_dog - creates a new dog object
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return;
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}

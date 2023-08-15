#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - this function initialises a variable of struct dog
 * @d: pointer to struct doh
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct  dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name =  malloc(strlen(name) + 1);
	if (d->name)
		strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner)
		strcpy(d->owner, owner)
}


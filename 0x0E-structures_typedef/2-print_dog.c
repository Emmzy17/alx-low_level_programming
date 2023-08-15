#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_dog - prints struct dog
 * @d: pointer to sturct dog
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

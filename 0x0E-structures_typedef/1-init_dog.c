#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise a variable of type struct dog
 * @d: struct dog
 * @name: string for name
 * @age: float for age
 * @owner: string for owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

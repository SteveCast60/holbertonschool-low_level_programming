#include "dog.h"
#include <stdio.h>

/**
 *init_dog - function that initialize variable
 *@d: pointer to a struct dog
 *@name: pointer to a string
 *@age:float
 *@owner: pointer to a string
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

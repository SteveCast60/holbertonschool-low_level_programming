#include "dog.h"
#include <stdio.h>

/**
 *print_dog - function that prints the members of dog struct
 *@d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
	}
	if (d->age == 0)
	{
		printf("Age: 0.000000\n");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}

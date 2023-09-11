#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * init_dog - it is type of struct dog
 *
 * @d: structure for dog info
 * @name: dog name for info
 * @age: dog age infomation
 * @owner: dog owner fot struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->owner = owner;
		d->age = age;
		d->name = name;
	}
}


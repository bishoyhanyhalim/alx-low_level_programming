#include <stdlib.h>
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
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - name and owner and age
 * @d: print dog name d
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

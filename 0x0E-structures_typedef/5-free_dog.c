#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - finally free all memory
 * @d: make the dogs free
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}

#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: number bytes for this task
 *
 * Return: pointer for allocate memorying
 */
void *malloc_checked(unsigned int b)
{
	void *hello;

	hello = malloc(b);

	if (hello == NULL)
	{
		exit(98);
	}

	return (hello);
}

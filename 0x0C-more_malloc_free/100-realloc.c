#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - memory malloc test
 * @ptr: pointer memory malloc
 * @old_size: size of memory for pointers
 * @new_size: new size for memorys
 *
 * Return: pointer array of malloc
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int wow;
	char *totals;
	char *go;


	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	totals = malloc(new_size);

	if (!totals)
	{
		return (NULL);
	}
	go = ptr;

	if (new_size < old_size)
	{
		for (wow = 0; wow < new_size; wow++)
			totals[wow] = go[wow];
	}

	if (new_size > old_size)
	{
		for (wow = 0; wow < old_size; wow++)
			totals[wow] = go[wow];
	}

	free(ptr);
	return (totals);
}

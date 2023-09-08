#include "main.h"
#include <stdlib.h>

/**
 * *_home - fills memory testing
 * @cool: memory area for this task
 * @fall: char to copying
 * @zoom: number times
 *
 * Return: pointer memory
 */

char *_home(char *cool, char fall, unsigned int zoom)
{
	unsigned int nums;

	for (nums = 0; nums < zoom; nums++)
	{
		cool[nums] = fall;
	}

	return (cool);
}

/**
 * *_calloc - allocates memory test
 * @nmemb: number array of elements
 * @size: size from element
 *
 * Return: pointer for malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *helloo;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	helloo = malloc(size * nmemb);

	if (helloo == NULL)
	{
		return (NULL);
	}

	_home(helloo, 0, nmemb * size);

	return (helloo);
}

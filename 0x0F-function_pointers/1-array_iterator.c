#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - the function is given an element
 * @array: this is an array
 * @size: this is size of function
 * @action: it is point to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int elements = 0;

	if (!action && !array)
	{
		return;
	}

	for (; elements < size; elements++)
	{
		action(array[elements]);
	}
}

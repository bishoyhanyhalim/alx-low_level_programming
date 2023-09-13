#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function called
 * @array: this is an array
 * @size: this is the size
 * @cmp: function to pointe for
 *
 * Return: the result in the end
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int hello;

	hello = 0;

	if (array && cmp)
	{
		while (hello < size)
		{
			if (cmp(array[hello]))
				return (hello);

			hello++;
		}
	}

	return (-1);
}

#include "search_algos.h"

/**
 * linear_search - searches for array func
 *
 * @array: input to array
 * @size: size the array
 * @value: value of func
 * Return: Always the result
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}

#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a two array
 * @width: width matrix
 * @height: height matrix
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int num;
	int total;
	int **value;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	value = (int **) malloc(sizeof(int *) * height);

	if (value == NULL)
	{
		return (NULL);
	}

	for (num = 0; num < height; num++)
	{
		value[num] = (int *) malloc(sizeof(int) * width);
		if (value[num] == NULL)
		{
			free(value);
			for (total = 0; total <= num; total++)
				free(value[total]);
			return (NULL);
		}
	}

	for (num = 0; num < height; num++)
	{
		for (total = 0; total < width; total++)
		{
			value[num][total] = 0;
		}
	}

	return (value);
}

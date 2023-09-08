#include "main.h"
#include <stdlib.h>

/**
 * *array_range - doing an array
 * @min: minimum range of numbers
 * @max: maximum range of number
 *
 * Return: pointer for the array
 */

int *array_range(int min, int max)
{
	int numdo;
	int coolyou;
	int *cool;

	if (min > max)
	{
		return (NULL);
	}

	coolyou = max - min + 1;

	cool = malloc(sizeof(int) * coolyou);

	if (cool == NULL)
	{
		return (NULL);
	}

	for (numdo = 0; min <= max; numdo++)
	{
		cool[numdo] = min++;
	}

	return (cool);
}

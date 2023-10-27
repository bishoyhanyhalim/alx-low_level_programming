#include "main.h"

/**
 * clear_bit - give the input value
 * @n: pass the pointer
 * @index: save index value
 *
 * Return: return value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int moons;
	unsigned long int suns;

	moons = index;

	if (index > 64)
	{
		return (-1);
	}

	if (*n == 0)
	{
		return (0);
	}

	for (suns = 1; moons > 0; suns *= 2, moons--)
		;

	if ((*n >> index) & 1)
	{
		*n -= suns;
	}

	return (1);
}

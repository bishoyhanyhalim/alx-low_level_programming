#include "main.h"

/**
 * clear_bit - git the number value
 * @n: look tor the dec num
 * @index: look for numbers
 *
 * Return: return the value of bit home
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int nice;
	unsigned long int moon;

	if (index > 64)
	{
		return (-1);
	}

	nice = index;

	for (moon = 1; nice > 0; moon *= 2, nice--)
		;

	if ((*n >> index) & 1)
	{
		*n -= moon;
	}

	return (1);
}

#include "main.h"


/**
 * set_bit - put input value
 * @n: pointer pass
 * @index: save value
 *
 * Return: retrun the value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hours;

	if (index > 64)
	{
		return (-1);
	}

	for (hours = 1; index > 0; index--, hours *= 2)
		;

	*n += hours;

	return (1);
}

#include "main.h"

/**
 * set_bit -  printing the value of bit
 * @n: num of the index pointing
 * @index: this is what we want to git
 *
 * Return: return the value of bit home
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int home;

	if (index > 64)
	{
		return (-1);
	}

	for (home = 1; index > 0; index--, home *= 2)
		;

	*n += home;

	return (1);
}

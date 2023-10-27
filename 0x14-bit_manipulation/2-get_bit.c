#include "main.h"


/**
 * get_bit - give the bits
 * @n: nums of input
 * @index: how many bit pass
 *
 * Return: return the value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int books;

	if (index > 64)
	{
		return (-1);
	}

	books = n >> index;

	return (books & 1);
}

#include "main.h"

/**
 * get_bit - printing the value of bit
 * @n: num of the index
 * @index: this is what we want to git
 *
 * Return: return the value of bit look
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int look;

	if (index > 64)
	{
		return (-1);
	}

	look = n >> index;

	return (look & 1);
}

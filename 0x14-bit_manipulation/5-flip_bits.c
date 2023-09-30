#include "main.h"

/**
 * flip_bits - convert bit to git the value
 * @n: number to add
 * @m: the number 2 to add
 * Return: return the value of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int soon = 0;
	unsigned long int wow;

	wow = n ^ m;

	while (wow)
	{
		soon++;

		wow &= (wow - 1);
	}

	return (soon);
}

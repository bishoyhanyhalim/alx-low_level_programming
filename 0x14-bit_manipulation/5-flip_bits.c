#include "main.h"

/**
 * flip_bits - convert numbers
 * @n: number one
 * @m: num two
 *
 * Return: return value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int adad;
	unsigned long int likey;

	adad = 0;
	likey = n ^ m;

	if (n == m)
	{
		return (0);
	}

	while (likey)
	{
		adad++;
		likey &= (likey - 1);
	}

	return (adad);
}

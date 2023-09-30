#include "main.h"

/**
 * binary_to_uint - flip the intiger number to num
 * @b: help character b
 *
 * Return: return the value
 */

unsigned int binary_to_uint(const char *b)
{
	int flow;
	unsigned int sums;
	unsigned int mult;

	if (b == NULL)
	{
		return (0);
	}

	for (flow = 0; b[flow]; flow++)
	{
		if (b[flow] != '0' && b[flow] != '1')
		{
			return (0);
		}
	}

	for (mult = 1, sums = 0, flow--; flow >= 0; flow--, mult *= 2)
	{
		if (b[flow] == '1')
			sums += mult;
	}

	return (sums);
}

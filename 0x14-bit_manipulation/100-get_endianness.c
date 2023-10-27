#include "main.h"

/**
 * get_endianness - 4of el arkam
 *
 * Return: a7seb el rakam
 */
int get_endianness(void)
{
	int food;

	food = 1;

	if (*(char *)&food == 1)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

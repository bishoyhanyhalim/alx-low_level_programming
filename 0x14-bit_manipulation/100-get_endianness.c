#include "main.h"

/**
 * get_endianness - get the num
 *
 * Return: return the num value 
 */

int get_endianness(void)
{
	int flow = 1;

	if (*(char *) & flow == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

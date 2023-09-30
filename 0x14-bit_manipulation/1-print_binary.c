#include "main.h"

/**
 * print_binary - flip the intiger number to num
 * @n: print the bit number
 */

void print_binary(unsigned long int n)
{
	int more;
	unsigned long int go;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (go = n, more = 0; (go >>= 1) > 0; more++)
		;

	for (; more >= 0; more--)
	{
		if ((n >> more) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}

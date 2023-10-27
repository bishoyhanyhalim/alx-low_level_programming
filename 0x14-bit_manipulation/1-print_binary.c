#include "main.h"

/**
 * print_binary - this is func to convert number to bit
 * @n: pointer to main func
 *
 * Return: value of number
 */

void print_binary(unsigned long int n)
{
	int looks;
	unsigned long int tools;

	if (n == 0)
	{

		putchar('0');
		return;
	}

	for (tools = n, looks = 0; (tools >>= 1) > 0; looks++)
		;

	for (; looks >= 0; looks--)
	{
		if ((n >> looks) & 1)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}

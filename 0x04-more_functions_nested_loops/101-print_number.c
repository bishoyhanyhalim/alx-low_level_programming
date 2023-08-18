#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n5;

	if (n < 0)
	{
		n5 = -n;
		_putchar('-');
	} else
	{
		n5 = n;
	}

	if (n5 / 10)
	{
		print_number(n5 / 10);
	}

	_putchar((n5 % 10) + '0');
}

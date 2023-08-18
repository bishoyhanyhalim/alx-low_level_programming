#include "main.h"

/**
 * print_numbers - prints the numbers
 * followed by a new line
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}

	_putchar("\n");

	return (0);
}

#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int sum, num;

		for (sum = 0; sum < size; sum++)
		{
			for (num = 0; num < size; num++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int a, g;

		for (a = 0; a < n; a++)
		{
			for (g = 0; g < n; g++)
			{
				if (g == a)
					_putchar('\\');
				else if
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

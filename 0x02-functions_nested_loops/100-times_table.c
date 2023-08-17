#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int num, multnum, prod;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (multnum = 1; multnum <= n; multnum++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				prod = num * multnum;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				} else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

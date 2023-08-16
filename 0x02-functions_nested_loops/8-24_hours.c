#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
void jack_bauer(void)
{
	int a, b;


	if (a = 0; a < 24; a++)
	{
		if (b = 0; b < 60; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}

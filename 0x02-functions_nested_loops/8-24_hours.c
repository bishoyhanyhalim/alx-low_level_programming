#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * @h: The hour of the time.
 * @m: The minute of the time.
 * @n: This is not a valid parameter for this function.
 *
 * @n: the int to extract the last digit from
 *
 * Return: value of the last digit
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}

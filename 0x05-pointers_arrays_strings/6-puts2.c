#include "main.h"

/**
 * puts2 - prints one char out of 2
 * @str: string to print the chars
 */
void puts2(char *str)
{
	int len, p;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (p = 0; p < len; p += 2)
	{
		_putchar(str[p]);
	}

	_putchar('\n');
}

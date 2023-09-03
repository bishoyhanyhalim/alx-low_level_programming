#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string
 */
void _puts(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}

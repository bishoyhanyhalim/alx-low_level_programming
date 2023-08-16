#include "main.h"
#include <stdio.h>

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int charter;

	for (charter = 0; charter < 8; charter++)
		_putchar(str[charter]);
	_putchar('\n');

	return (0);
}

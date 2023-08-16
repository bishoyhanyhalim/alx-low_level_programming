#include "main.h"

/**
 * print_alphabet - for print a to z
 *
 * Return:0 always
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

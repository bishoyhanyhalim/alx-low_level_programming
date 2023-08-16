#include "main.h"

/**
 *  print_alphabet_x10 - for print  print_alphabet_x10
 *
 * Return:0 always
 */
void print_alphabet_x10(void)
{
	int ch;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}

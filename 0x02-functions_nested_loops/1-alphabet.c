#include "main.h"
#include <stdio.h>

/**
 * main - print words
 *
 * print_alphabet - Entry point
 * Return:0
 */
void print_alphabet(void);
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}

int main(void)
{
	print_alphabet();
	return (0);
}

#include "main.h"

/**
 * main - print words
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 * print_alphabet - Entry point function to print a -z
 *
 * Description: hello world is my nain
 *
 * Return: 0 always
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

#include <stdio.h>

/**
 * main - print words small and cabital
 *
 * Return: 0 always
 */
int main(void)
{
	char low_letter;
	char high_letter;

	for (low_letter = 'a'; low_letter <= 'z'; low_letter++)
	{
		putchar(low_letter);
	}
	for (high_letter = 'A'; high_letter <= 'Z'; high_letter++)
	{
		putchar(high_letter);
	}

	putchar('\n');
	return (0);
}

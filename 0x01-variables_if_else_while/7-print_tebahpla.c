#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0 always
 */
int main(void)
{
	char word;

	for (word = 'z'; word >= 'a'; word--)
	{
		putchar(word);
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int num;
	char word;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (word = 'a'; word <= 'f'; word++)
	{
		putchar(word);
	}

	putchar('\n');
	return (0);
}

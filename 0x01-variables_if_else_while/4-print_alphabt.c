#include <stdio.h>

/**
 * main - print lowwer words
 *
 * Retern: 0 Alwayes
 */
int main(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
	{
		if (word != 'e' && word != 'q')
		putchar(word);
	}

	putchar('\n');
	return (0);
}

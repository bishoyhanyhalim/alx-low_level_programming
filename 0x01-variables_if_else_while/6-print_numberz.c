#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	putchar('\n');
	return (0);
}

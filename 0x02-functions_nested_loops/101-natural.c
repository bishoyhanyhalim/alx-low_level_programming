#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number, total;

	for (number = 0; number < 1024; number++)
	{
		if ((number % 3 == 0) || (number % 5 == 0))
		{
			total += number;
		}
	}

	printf("%d\n", total);
	return (0);
}

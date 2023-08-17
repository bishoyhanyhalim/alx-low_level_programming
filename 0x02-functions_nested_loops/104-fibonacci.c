#include <stdio.h>

/**
 * main - finds and prints the first 98
 *
 * Return: ALways 0
 */
int main(void)
{
	unsigned long int num1, num2, num3, j1, j2, k1, k2;

	num2 = 1;
	num3 = 2;

	printf("%lu", num2);

	for (num1 = 1; num1 < 91; num1++)
	{
		printf(", %lu", num3);
		num3 = num3 + num2;
		num2 = num3 - num2;
	}

	j1 = num2 / 1000000000;
	j2 = num2 % 1000000000;
	k1 = num3 / 1000000000;
	k2 = num3 % 1000000000;

	for (num1 = 92; num1 < 99; ++num1)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}

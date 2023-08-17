#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int total;
	unsigned long num1 = 0, num2 = 1, sum;

	for (total = 0; total < 50; total++)
	{
		sum = num1 + num2;
		printf("%lu", sum);

		num1 = num2;
		num2 = sum;

		if (total == 49)
		{
			printf("\n");
		} else
		{
			printf(", ");
		}
	}
	return (0);
}

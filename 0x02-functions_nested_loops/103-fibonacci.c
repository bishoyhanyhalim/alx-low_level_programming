#include <stdio.h>

/**
 * main - finds and prints the sum
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long long total = 0;
	unsigned long num1 = 0, num2 = 1, sum;

	while (1)
	{
		sum = num1 + num2;

		if (sum > 400000)
			break;
		if ((sum % 2) == 0)
			total += sum;

		num1 = num2;
		num2 = sum;
	}
	printf("%llu\n", total);

	return (0);
}

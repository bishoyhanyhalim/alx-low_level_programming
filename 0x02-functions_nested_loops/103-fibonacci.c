#include <stdio.h>

/**
 * main - finds and prints the sum
 *
 * Return: Always 0
 */
int main(void)
{
	float total;
	unsigned long num1 = 0, num2 = 1, sum;

	while (1)
	{
		sum = num1 + num2;

		if (sum > 400000)
			break;
		if ((sum % 2) == 0)
			total += sum

		num1 = num2;
		num2 = sum;
	}
	pritnf("%.0f\n", total);

	return (0);
}

#include <stdio.h>

/**
 * main - finds and prints the sum
 *
 * Return: Always 0
 */
int main(void)
{
	int num3;
	unsigned long int num, num2, total, sum;

	num = 1;
	num2 = 2;
	sum = 0;

	for (num3 = 1; num3 <= 33; ++num3)
	{
		if (num < 4000000 && (num % 2) == 0)
		{
			sum = sum + num;
		}
		total = num + num2;
		num = num2;
		num2 = total;
	}

	printf("%lu\n", sum);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf(" Fizz");
		} else if (num % 5 == 0 && num % 3 != 0)
		{
			printf(" Buzz");
		} else if (num % 3 == 0 && num % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (num == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}

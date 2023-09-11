#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two num
 * @argc: number to arguments
 * @argv: array from argument
 *
 * Return: alway 0
 */
int main(int argc, char *argv[])
{
	char *luck1 = argv[1];
	char *luck2 = argv[2];
	int num;
	int number99 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (num = 0; luck1[num] != '\0'; num++)
	{
		if (luck1[num] < '0' || luck1[num] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	for (num = 0; luck2[num] != '\0'; num++)
	{
		if (luck2[num] < '0' || luck2[num] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	int cool = atoi(luck1);
	int cooling = atoi(luck2);
	int result = cool * cooling;

	if (result == 0)
	{
		putchar('0');
	} else
	{
		int temp = result;

		while (temp != 0)
		{
			temp /= 10;
			number99++;
		}

		char digits[number99];

		for (num = number99 - 1; num >= 0; num--)
		{
			digits[num] = (result % 10) + '0';
			result /= 10;
		}

		for (num = 0; num < number99; num++)
		{
			putchar(digits[num]);
		}
	}

	putchar('\n');
	return (0);
}

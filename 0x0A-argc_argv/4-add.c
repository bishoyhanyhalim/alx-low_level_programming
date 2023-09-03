#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two positive num
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 or 1 always
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	int num2;

	for (num2 = 1; num2 < argc; num2++)
	{
		for (num = 0; argv[num2][num] != '\0'; num++)
		{
			if (!isdigit(argv[num2][num]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num2]);
	}

	printf("%d\n", sum);
	return (0);
}

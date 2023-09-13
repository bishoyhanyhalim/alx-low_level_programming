#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - return the calc of num
 * @argc: it is the char
 * @argv: it is the vector
 *
 * Return: return the numbers
 */
int main(int argc, char *argv[])
{
	int number1;
	int number2;
	int suming;
	char look;
	int (*luky)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);

	luky = get_op_func(argv[2]);

	if (!luky)
	{
		printf("Error\n");
		exit(99);
	}

	look = *argv[2];

	if ((look == '/' || look == '%') && number2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	suming = luky(number1, number2);

	printf("%d\n", suming);

	return (0);
}

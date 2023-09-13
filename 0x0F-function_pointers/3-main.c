#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
  * main - print the sum
  * @argc: pointer of fun
  * @argv: pointer of fun
  *
  * Return: result of calc
  */

int main(int argc, char *argv[])
{
	int (*luke)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	luke = get_op_func(argv[2]);

	if (!luke)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", luke(atoi(argv[1]), atoi(argv[3])));

	return (0);
}

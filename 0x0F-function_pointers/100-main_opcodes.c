#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the result
 * @argc: result of num
 * @argv: sum of number
 *
 * Return: the result of numbers
 */
int main(int argc, char *argv[])
{
	int hello;
	int nice;
	char *heppy;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nice = atoi(argv[1]);

	if (nice < 0)
	{
		printf("Error\n");
		exit(2);
	}

	heppy = (char *)main;

	for (hello = 0; hello < nice; hello++)
	{
		if (hello == nice - 1)
		{
			printf("%02hhx\n", heppy[hello]);
			break;
		}
		printf("%02hhx ", heppy[hello]);
	}

	return (0);
}

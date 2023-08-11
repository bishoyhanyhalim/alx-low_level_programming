#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digital number
 *
 * Return: 0 always
 */
int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;

	if (n > 5 && n != 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}
	return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sum, s;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((5563 - sum) - '0' < 78)
		{
			s = 5563 - sum - '0';
			sum += s;
			putchar(s + '0');
			break;
		}
	}

	return (0);
}

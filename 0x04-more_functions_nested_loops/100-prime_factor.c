#include <math.h>
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int go;
	long int i;

	n = 612852475143;
	go = -1;

	while (n % 2 == 0)
	{
		go = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			go = i;
			n = n / i;
		}
	}

	if (n > 2)
		go = n;

	printf("%ld\n", go);

	return (0);
}

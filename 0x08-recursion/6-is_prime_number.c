#include "main.h"

int hello(int n, int i);

/**
 * is_prime_number - says if an integer is a prime num
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (hello(n, n - 1));
}

/**
 * hello - calculates if a number
 * @n: number to evaluate
 * @i: iterator
 * Return: 0 alwaays
 */
int hello(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (hello(n, i - 1));
}

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum the number for all
 * @n: calce all num from user
 *
 * Return: return the value of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	int hello = 0;
	unsigned int numdo;
	va_list group;

	if (n == 0)
	{
		return (0);
	}

	va_start(group, n);

	for (numdo = 0; numdo < n; numdo++)
		hello += va_arg(group, int);

	va_end(group);

	return (hello);
}

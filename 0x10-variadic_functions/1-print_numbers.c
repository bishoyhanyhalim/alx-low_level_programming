#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers - git the print numbers
 * @separator: value of numbers
 * @n: how much the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list alone;
	unsigned int nice;

	va_start(alone, n);

	for (nice = 0; nice < n; nice++)
	{
		if (!separator)
		{
			printf("%d", va_arg(alone, int));
		}
		else if (separator && nice == 0)
		{
			printf("%d", va_arg(alone, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(alone, int));
		}
	}

	printf("\n");

	va_end(alone);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - look for output
 * @separator: the value of num
 * @n: sum of num for arg
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list thing;
	char *look;
	unsigned int going;

	va_start(thing, n);

	for (going = 0; going < n; going++)
	{
		look = va_arg(thing, char *);
		if (!look)
		{
			look = "(nil)";
		}
		else if (separator && going == 0)
		{
			printf("%s", look);
		}
		else if (!separator)
		{
			printf("%s", look);
		}
		else
		{
			printf("%s%s", separator, look);
		}
	}

	printf("\n");

	va_end(thing);
}

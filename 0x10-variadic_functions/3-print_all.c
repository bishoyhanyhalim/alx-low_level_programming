#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_all - look for output
 * @format: print the number of case
 */

void print_all(const char * const format, ...)
{
	char *luck, *zoom = "";
	int numbers = 0;

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[numbers])
		{
			switch (format[numbers])
			{
				case 'f':
					printf("%s%f", zoom, va_arg(list, double));
					break;
				case 'i':
					printf("%s%d", zoom, va_arg(list, int));
					break;
				case 'c':
					printf("%s%c", zoom, va_arg(list, int));
					break;
				case 's':
					luck = va_arg(list, char *);
					if (!luck)
					{
						luck = "(nil)";
					}
					printf("%s%s", zoom, luck);
					break;
				default:
					numbers++;
					continue;
			}
			zoom = ", ";
			numbers++;
		}
	}
	va_end(list);
	printf("\n");
}

#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - the print the text
 * @name: the name of pointer name
 * @f: pointeing for new function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return;
	}

	f(name);
}

#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - this the new function
 * @s: the input that the user input
 *
 * Return: result for sum
 */

int (*get_op_func(char *s))(int, int)
{
	int bolling = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[bolling].op)
	{
		if (strcmp(ops[bolling].op, s) == 0)
			return (ops[bolling].f);
		bolling++;
	}

	return (NULL);
}

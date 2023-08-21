#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		if (l == 0)
			printf("%d", a[l]);
		else
			printf(", %d", a[l]);
	}
		printf("\n");
}

#include "main.h"

/**
 * reverse_array - reverses an array integers
 * @a: array to be reversed
 * @n: number of elements arraye
 */
void reverse_array(int *a, int n)
{
	int so, yo, num;

	yo = n - 1;

	for (so = 0; so < n / 2; so++)
	{
		num = a[so];
		a[so] = a[yo];
		a[yo--] = num;
	}
}

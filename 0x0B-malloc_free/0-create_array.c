#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array
 * @size: size of array
 * @c: char to initialize
 *
 * Return: pointer of array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int num;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}

	ar = (char *)malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (num = 0; num < size; num++)
	{
		ar[num] = c;
	}

	return (ar);
}

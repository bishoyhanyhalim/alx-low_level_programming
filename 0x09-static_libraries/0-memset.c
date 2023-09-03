#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be fill
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		s[num] = b;
	}
	return (s);
}

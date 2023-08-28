#include "main.h"

/**
 * *_memcpy - copies memory
 * @dest: destination memory
 * @src: memory area to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cib;

	for (cib = 0; cib < n; cib++)
	{
		dest[cib] = src[cib];
	}
	return (dest);
}

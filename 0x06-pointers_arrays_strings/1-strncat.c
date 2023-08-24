#include "main.h"

/**
 * _strncat - concatenates n bytes code
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str
 *
 * Return: a pointer to the resulting
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, u;

	k = 0;
	while (dest[k])
		k++;

	for (u = 0; u < n && src[u] != '\0'; u++)
		dest[k + u] = src[u];

	dest[k + u] = '\0';

	return (dest);
}

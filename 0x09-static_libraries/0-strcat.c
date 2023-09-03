#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append
 * @src: string to add
 *
 * Return: a pointer to the resulting
 */

char *_strcat(char *dest, char *src)
{
	int h, h2;

	h = 0;
	while (dest[h])
		h++;

	for (h2 = 0; src[h2]; h2++)
		dest[h++] = src[h2];

	return (dest);
}

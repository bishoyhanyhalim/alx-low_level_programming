#include "main.h"

/**
 * *_strcpy - copies the string pointed
 * @dest: pointer to the buffer
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, k;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (k = 0; k < len; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}

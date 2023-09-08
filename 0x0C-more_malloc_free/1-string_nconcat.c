#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - n bytes to string
 * @s1: string for append
 * @s2: string for char
 * @n: numbers of bytes for char
 * Return: pointer for string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *go;

	if (s1 == NULL)
	{
		s1 = "";
	}

	size_t total1 = strlen(s1);
	size_t total2 = strlen(s2);
	size_t look = (n >= total2) ? (total1 + total2) : (total1 + n);

	go = malloc(look + 1);

	if (go == NULL)
	{
		return (NULL);
	}

	strcpy(go, s1);
	strncat(go, s2, n);

	return (go);
}

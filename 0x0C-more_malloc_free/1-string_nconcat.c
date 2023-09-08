#include "main.h"
#include <stdlib.h>

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
	unsigned int num1;
	unsigned int num2;
	unsigned int num3 = 0;


	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[num3])
		num3++;

	go = malloc(sizeof(char) * (num3 + n + 1));

	if (!go)
	{
		return (NULL);
	}

	for (num1 = 0; *s1; num1++, s1++)
	{
		go[num1] = *s1;
	}

	for (num1 = num3, num2 = 0; num2 < n && s2[num2]; num1++, num2++)
	{
		go[num1] = s2[num2];
	}

	go[num3 + n] = '\0';

	return (go);
}

#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - n bytes from string
 * @s1: string for poiner
 * @s2: string to concatenate from
 * @n: number from bytes
 *
 * Return: pointer go to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cool;
	unsigned int number1 = 0;
	unsigned int number2 = 0;
	unsigned int look = 0;
	unsigned int moon = 0;

	while (s1 && s1[look])
		look++;
	while (s2 && s2[moon])
		moon++;

	if (n < moon)
	{
		cool = malloc(sizeof(char) * (look + n + 1));
	}
	else
	{
		cool = malloc(sizeof(char) * (look + moon + 1));
	}

	if (!cool)
	{
		return (NULL);
	}

	while (number1 < look)
	{
		cool[number1] = s1[number1];
		number1++;
	}

	while (n < moon && number1 < (look + n))
		cool[number1++] = s2[number2++];

	while (n >= moon && number1 < (look + moon))
		cool[number1++] = s2[number2++];

	cool[number1] = '\0';

	return (cool);
}

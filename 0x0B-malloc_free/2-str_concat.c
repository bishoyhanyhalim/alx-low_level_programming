#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenate 2 strings
 * @s1: string of concatenates
 * @s2: string of concatenates
 *
 * Return: pointer string
 */
char *str_concat(char *s1, char *s2)
{
	char *num;
	unsigned int ko = 0, sum = 0, value1 = 0, value2 = 0;

	while (s1 && s1[value1])
		value1++;
	while (s2 && s2[value2])
		value2++;

	num = malloc(sizeof(char) * (value1 + value2 + 1));
	if (num == NULL)
		return (NULL);

	ko = 0;
	sum = 0;

	if (s2)
	{
		while (ko < (value1 + value2))
		{
			num[ko] = s2[sum];
			ko++;
			sum++;
		}
	}

		if (s1)
	{
		while (ko < value1)
		{
			num[ko] = s1[ko];
			ko++;
		}
	}
	num[ko] = '\0';

	return (num);
}

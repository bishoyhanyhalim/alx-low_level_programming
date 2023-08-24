#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *num)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (num[i] >= 'a' && num[i] <= 'z')
			num[i] = num[i] - 32;
	}

	return (s);
}

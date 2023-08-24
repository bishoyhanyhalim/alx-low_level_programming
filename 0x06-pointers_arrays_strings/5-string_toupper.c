#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * @num: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] >= 97 && num[i] <= 122)
			num[i] = num[i] - 32;
	}

	return (num);
}

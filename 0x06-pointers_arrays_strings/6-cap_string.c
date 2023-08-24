#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @hi: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *hi)
{
	int i, num;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; hi[i] != '\0'; i++)
	{
		if (i == 0 && hi[i] >= 'a' && hi[i] <= 'z')
			hi[i] -= 32;

		for (num = 0; num < 13; num++)
		{
			if (hi[i] == spe[num])
			{
				if (hi[i + 1] >= 'a' && hi[i + 1] <= 'z')
				{
					hi[i + 1] -= 32;
				}
			}
		}
	}

	return (hi);
}
